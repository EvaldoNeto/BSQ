/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:37:28 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 22:21:07 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		*measure_size(char *str, int i)
{
	int		*size;
	char	*linenbr;

	while (str[i] != '\n')
		i++;
	i = i - 3;
	linenbr = malloc(sizeof(char) * i);
	while (--i >= 0)
		linenbr[i] = str[i];
	size = (int *)malloc(sizeof(int) * 2);
	size[0] = ft_atoi(linenbr);
	size[1] = 0;
	while (*str != '\n')
		str++;
	str++;
	if (*str)
	{
		while (*str != '\n')
		{
			str++;
			size[1] += 1;
		}
	}
	return (size);
}

int		**get_array(char *str, int *size, int i[2], char *c)
{
	int		x;
	int		**result;

	result = (int **)malloc(sizeof(int *) * size[0]);
	x = 0;
	while (*str != '\n')
		str++;
	while (str[++x] != '\0')
	{
		result[i[0]] = (int *)malloc(sizeof(int) * size[1]);
		while (str[x] != '\n')
		{
			(str[x] == c[0]) ? (result[i[0]][i[1]] = 1) :
				(result[i[0]][i[1]] = 0);
			if ((str[x] != c[0] && str[x] != c[1]) || i[1] >= size[1])
				return (0);
			x++;
			i[1]++;
		}
		if (i[1] != size[1])
			return (0);
		(str[x + 1] == '\0') ? (i[1]++) : (i[1] = 0);
		i[0]++;
	}
	return ((x - i[0]) / (i[1] - 1) == size[0]) ? (result) : (0);
}
