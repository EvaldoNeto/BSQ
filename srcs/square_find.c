/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:53:46 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 16:13:41 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"
#include <stdio.h>

int		min_xyz(int x, int y, int z)
{
	if (x <= y && x <= z)
		return (x);
	else if (y <= x && y <= z)
		return (y);
	else if (z <= x && z <= y)
		return (z);
	return (0);
}

int		**init_square(int **user_input, int **matched, int size_y, int size_x)
{
	int i;

	i = -1;
	matched = (int **)malloc(sizeof(int *) * size_y);
	while (i++ < size_y)
		matched[i] = (int *)malloc(sizeof(int) * size_x);
	i = -1;
	while (i++ < size_x)
		matched[0][i] = user_input[0][i];
	i = 0;
	while (i < size_y)
	{
		matched[i][0] = user_input[i][0];
		i++;
	}
	return (matched);
}

int		**make_square(int **user_input, int size_y, int size_x)
{
	int		i;
	int		j;
	int		**matched;

	matched = init_square(user_input, matched, size_y, size_x);
	j = 0;
	i = 1;
	while (i < size_y)
	{
		while (j < size_x)
		{
			if (user_input[i][j] == 0)
				matched[i][j] = 0;
			else
				matched[i][j] = min_xyz(matched[i - 1][j - 1],
					matched[i][j - 1], matched[i - 1][j]) + 1;
			j++;
		}
		j = 1;
		i++;
	}
	print_array(matched, size_y, size_x);
	return (matched);
}

int		*square_find(int **matched, int size_y, int size_x, int biggest)
{
	int		i;
	int		j;
	int		*pos;

	pos = (int *)malloc(sizeof(int) * 3);
	i = size_y - 1;
	j = size_x - 1;
	while (i >= 0)
	{
		while (j >= 0)
		{
			if (matched[i][j] >= biggest)
			{
				biggest = matched[i][j];
				pos[0] = j - (biggest - 1);
				pos[1] = i - (biggest - 1);
			}
			j--;
		}
		j = size_x;
		i--;
	}
	pos[2] = biggest;
	return (pos);
}
