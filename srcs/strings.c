/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:36:30 by eneto             #+#    #+#             */
/*   Updated: 2016/09/19 18:00:50 by eneto            ###   ########.fr       */
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

char	*ft_realloc(char *str, int buff)
{
	char	*tmp;
	int		i;
	int		size;

	size = ft_strlen(str);
	i = 0;
	tmp = (char *)malloc(sizeof(char) * (size + buff + 1));
	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	while (i <= buff + size) // porque vc coloca zero no final se vc ja sabe o tamanho antes?
	{
		tmp[i] = '\0';
		i++;
	}
	free(str);
	return (tmp);
}

char	*ft_join(char *s1, char *s2)
{
	int	i;
	int	length;
  
	length = ft_strlen(s1);
	s1 = ft_realloc(s1, ft_strlen(s2) + 1);
	i = 0;
	while (s2[i])
	{
		s1[i + length] = s2[i];
		i++;
	}
	s1[i + length] = '\0';
	return (s1);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}