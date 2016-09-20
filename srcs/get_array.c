/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:37:28 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 22:08:03 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		*measure_size(char *str)
{
	int *size;

	size = (int *)malloc(sizeof(int) * 2);
	size[0] = ft_atoi(str);
	size[1] = 0;
	while (*str != '\n')
		str++;
	str++;
	while (*str != '\n')
	{
		str++;
		size[1] += 1;
	}
	return (size);
}

int		**get_array(char *str, int *size, int i, char *c)
{
	int		x;
	int		**result;
	int		j;

	result = (int **)malloc(sizeof(int *) * size[0]);
	j = 0;
	x = 0;
	while (*str != '\n')
		str++;
	while (str[++x] != '\0')
	{
		result[i] = (int *)malloc(sizeof(int) * size[1]);
		while (str[x] != '\n')
		{
			if (str[x] == c[0])
				result[i][j] = 1;
			else if (str[x] == c[1])
				result[i][j] = 0;
			x++;
			j++;
		}
		i++;
		j = 0;
	}
	return (result);
}
