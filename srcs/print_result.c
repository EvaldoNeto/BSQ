/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:31:22 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 16:53:54 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	print_result(int **matched, int *size, int *pos)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size[1])
	{
		while (j < size[0])
		{
			if ((i >= pos[1] && i < pos[1] + pos[2]) 
				&& (j >= pos[0] && j < pos[0] + pos[2]))
				ft_putchar('x');
			else if (matched[i][j] == 0)
				ft_putchar('o');
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
