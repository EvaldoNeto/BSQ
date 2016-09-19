/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:06:21 by eneto             #+#    #+#             */
/*   Updated: 2016/09/19 18:01:16 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bsq.h"
#define BUFFER_SIZE 4096

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
	
	str = (char *)malloc(sizeof(char));
	if (argc == 1)
		str = read_input(str);
	else if (argc > 1)
		str = file_to_string(argv[1], str);
	
	ft_putstr(str);
	return (0);
}