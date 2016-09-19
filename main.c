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
char	*read_input()
{
	char	buf;
	int		i;
	char	*input;

	i = 0;	
	input = (char*)malloc(sizeof(char * BUFFER_SIZE + 1));
	while (read(0, &buf, 1) == 1)
	{
		if (ft_strlen(&buf) == 0)
		{
			input[i] = '\0';
			return (0);
		}
		input[i] = buf;
		i++;
		if (i == BUFFER_SIZE + 1)
			input = ft_realloc(input);
		
	}
	return (input);
}

int		main(int argc, char **argv)
{
	(void)argc;
	char *str;

	str = (char *)malloc(sizeof(char));
	str = file_to_string(argv[1], str);
	ft_putstr(str);
	return (0);
}
