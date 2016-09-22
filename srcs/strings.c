/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:36:30 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 19:42:00 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_realloc(char *str, int buff, int size)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (size + buff + 1));
	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	while (i <= buff + size)
	{
		tmp[i] = '\0';
		i++;
	}
	free(str);
	return (tmp);
}

char	*ft_join(char *s1, char *s2, int size)
{
	int	i;
	int	length;

	length = size;
	s1 = ft_realloc(s1, 1024 * 1024 * 5 + 1, size);
	i = 0;
	while (s2[i])
	{
		s1[i + length] = s2[i];
		i++;
	}
	s1[i + length] = '\0';
	return (s1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
