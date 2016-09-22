/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:02:16 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 23:07:17 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../includes/bsq.h"

char	*file_to_string(char *name_file, char *str)
{
	char	c[1024 * 1024 * 5 + 1];
	int		file;
	int		temp;
	int		size;

	size = 0;
	temp = 0;
	if ((file = open(name_file, O_RDONLY)) == -1)
	{
		ft_puterror("map error\n");
		return (0);
	}
	while ((temp = read(file, c, 1024 * 1024 * 5 + 1)))
	{
		c[temp] = '\0';
		str = ft_join(str, c, size);
		size += temp;
	}
	close(file);
	return (str);
}
