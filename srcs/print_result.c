/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:31:22 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 14:34:59 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	print_result(char *user_input, int pos_y, int pos_x, int size)
{
	int		i;
	int		l;

	i = 0;
	l = 1;
	while (user_input[i] != '\0')
	{
		if (i / l <= (pos_x + size) && l <= (pos_y + size))
			ft_putchar('X');
		else
			ft_putchar(user_input[i]);
		if (user_input[i] == '\n')
			l++;
		i++;
	}
	ft_putchar('\n');
}
