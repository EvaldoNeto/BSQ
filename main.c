/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:06:21 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 17:23:39 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bsq.h"
#define BUFFER_SIZE 4096
#include <stdio.h>

// This function will read the user input and transform it in an
// array of characters.
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
	
    
	pos = (int *)malloc(sizeof(int) * 3);
	str = (char *)malloc(sizeof(char));
	if (argc == 1)
		str = read_input(str);
	else if (argc > 1)
		str = file_to_string(argv[1], str);
	
	size = malloc(sizeof(int) * 2);
    size = measure_size(str);
	printf("size_y: %d \nsize_x: %d\n", size[0], size[1]);

	// this function will stock the OBSTACLE and SPACE characters
	charact = read_header(str);
	// print obsatcle and space signs
	printf("space: %c \nobstacle: %c\n\n", charact[0], charact[1]);
	// // print square of ints
	print_array(get_array(str, size, 0, 0, charact), size[0], size[1]);
	ft_putchar('\n');
	// // print square of result
	pos = square_find(make_square(get_array(str, size, 0, 0, charact), size[0], size[1]), size[0], size[1], 0);
	// print final answer positions and size
	printf("\nposition_x: %d\nposition_y: %d\nbiggest: %d\n\n", pos[0], pos[1], pos[2]);
	//print final answer
	print_result(make_square(get_array(str, size, 0, 0, charact), size[0], size[1]), size, pos);

	return (0);
}
