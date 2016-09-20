/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:06:21 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 01:20:00 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bsq.h"

char	*read_input(char *input)
{
	char	buf;
	int		i;

	i = 0;
	while (read(0, &buf, 1) == 1)
	{
		input = ft_realloc(input, 1);
		input[i] = buf;
		i++;
	}
	input[i] = '\0';
	return (input);
}

void	show_result(char *str, int *size, char *letters, int *pos)
{
	int	**bin_array;
	int **int_array;
	int	i[2];

	i[0] = 0;
	i[1] = 0;
	letters = read_header(str);
	size = measure_size(str);
	if (!(bin_array = get_array(str, size, i, letters)))
	{
		ft_puterror("map error");
		return ;
	}
	int_array = make_square(bin_array, size[0], size[1]);
	pos = square_find(int_array, size[0], size[1], 0);
	print_result(int_array, size, pos, letters);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		*pos;
	int		*size;
	char	*charact;

	charact = (char *)malloc(sizeof(char) * 3);
	str = (char *)malloc(sizeof(char));
	pos = (int *)malloc(sizeof(int) * 4);
	size = malloc(sizeof(int) * 2);
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
			ft_putstr("\n");
		}
	}
	return (0);
}
