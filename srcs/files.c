/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:02:16 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 17:43:13 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../includes/bsq.h"
#include <stdio.h>

char	*file_to_string(char *name_file, char *str)
{
	char	c[4000];
	int		i;
	int		file;
	int		tmp;

	tmp = 0;
	if ((file = open(name_file, O_RDONLY)) == -1)
	{
		ft_putstr("No such file or directory\n");
		return (0);
	}
	i = 0;
	while ((tmp = read(file, c, 4001)))
	{
		c[tmp] = '\0';
		str = ft_join(str, c);
	}
	close(file);
	return (str);
}
