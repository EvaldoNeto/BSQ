/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:06:21 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 23:09:20 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bsq.h"

char	*read_input(char *input)
{
	char	buf[1024 * 1024 * 5];
	int		temp;
	int		size;

	size = 0;
	temp = 0;
	while ((temp = read(0, buf, 1024 * 1024 * 5 + 1)))
	{
		buf[temp] = '\0';
		input = ft_join(input, buf, size);
		size += temp;
	}
	return (input);
}

void	show_result(char *str, int *size, char *letters, int *pos)
{
	int	**bin_array;
	int **int_array;
	int	i[2];

	i[0] = 0;
	i[1] = 0;
	if (!str)
		return ;
	letters = read_header(str);
	size = measure_size(str, 0);
	if (size[0] == 0 || size[1] == 0)
	{
		ft_puterror("map error\n");
		return ;
	}
	if (!(bin_array = get_array(str, size, i, letters)))
	{
		ft_puterror("map error\n");
		return ;
	}
	int_array = make_square(bin_array, size[0], size[1]);
	pos = square_find(int_array, size[0], size[1], 0);
	print_result(int_array, size, pos, letters);
}

void	allocate_mem(char **str, char **charact, int **size, int **pos)
{
	*str = (char *)malloc(sizeof(char));
	*charact = (char *)malloc(sizeof(char) * 3);
	*pos = (int *)malloc(sizeof(int) * 4);
	*size = malloc(sizeof(int) * 2);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		*pos;
	int		*size;
	char	*charact;

	allocate_mem(&str, &charact, &size, &pos);
	pos[3] = 0;
	if (argc == 1)
	{
		str = read_input(str);
		show_result(str, size, charact, pos);
	}
	else if (argc > 1)
	{
		while (++pos[3] < argc)
		{
			str = file_to_string(argv[pos[3]], str);
			show_result(str, size, charact, pos);
			free(str);
			str = (char *)malloc(sizeof(char));
			if (argc > 2 && pos[3] < argc - 1)
				ft_putchar('\n');
		}
	}
	return (0);
}
