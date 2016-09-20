/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:37:28 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 15:14:58 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		*measure_size(char *str)
{
	int *size;

	size = (int *)malloc(sizeof(int) * 2);
	size[0] = 0;
	size[1] = 0;
	while (*str)
	{
		if (*str == '\n')
			size[0] += 1;
		str++;
		size[1] += 1;
	}
	size[0]--;
	size[1] = (size[1] - size[0]) / size[0];
	return (size);
}

int		**get_array(char *str, int *size, int i, int j)
{
	int		x;
	int		**result;

	result = (int **)malloc(sizeof(int *) * size[0]);
	x = 0;
	while (*str != '\n')
		str++;
	str++;
	while (str[x] != '\0')
	{
		result[i] = (int *)malloc(sizeof(int) * size[1]);
		while (str[x] != '\n')
		{
			if (str[x] == '.')
				result[i][j] = 1;
			else if (str[x] == 'o')
				result[i][j] = 0;
			x++;
			j++;
		}
		i++;
		x++;
		j = 0;
	}
	return (result);
}
