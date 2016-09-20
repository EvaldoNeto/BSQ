/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:48:43 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 15:18:40 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"
#include <stdio.h>

void	print_array(int **array, int size_x, int size_y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size_x)
	{
		while (j < size_x)
		{
			ft_putnbr(array[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
