/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:31:22 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 21:41:43 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	print_result(int **matched, int *size, int *pos, char *c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size[0])
	{
		while (j < size[1])
		{
			if ((i >= pos[1] && i < pos[1] + pos[2])
				&& (j >= pos[0] && j < pos[0] + pos[2]))
				ft_putchar(c[2]);
			else if (matched[i][j] == 0)
				ft_putchar(c[1]);
			else
				ft_putchar(c[0]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
