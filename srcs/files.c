/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:02:16 by eneto             #+#    #+#             */
/*   Updated: 2016/09/19 18:09:02 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../includes/bsq.h"

char	*file_to_string(char *name_file, char *str)
{
	char	c[1000];
	int		i;
	int		file;

	if ((file = open(name_file, O_RDONLY)) == -1)
	{
		ft_putstr("No such file or directory\n");
		return (0);
	}
	i = 0;
	while (read(file, c, 999))
	{
		str = ft_join(str, c);
		//str[i] = c;
		//i++;
	}
	//str[i] = '\0';
	close(file);
	return (str);
}
