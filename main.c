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
#include <stdlib.h>

int		main(int argc, char **argv)
{
	(void)argc;
	char *str;

	str = (char *)malloc(sizeof(char));
	str = file_to_string(argv[1], str);
	ft_putstr(str);
	return (0);
}
