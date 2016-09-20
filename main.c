/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:06:21 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 22:08:16 by eneto            ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	(void)argc;
	char *str;
	(void)argv;
	int	*pos;
	int *size;
	char *charact;
	int	i;

	
	str = (char *)malloc(sizeof(char));
	pos = (int *)malloc(sizeof(int) * 3);
	size = malloc(sizeof(int) * 2);
	i = 1;
	if (argc == 1)
		str = read_input(str);
	else if (argc > 1)
	{
		while (i < argc)
		{	
			str = file_to_string(argv[i], str);
			size = measure_size(str);
			charact = read_header(str);
			pos = square_find(make_square(get_array(str, size, 0, charact),
										size[0], size[1]), size[0], size[1], 0);
			print_result(make_square(get_array(str, size, 0, charact), size[0],
									size[1]), size, pos, charact);
			i++;
			ft_putstr("\n");
		}
		
	}
	return (0);
}
