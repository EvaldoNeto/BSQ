/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_header.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 21:42:15 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 21:44:27 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*read_header(char *str)
{
	char	*charact;
	int		i;

	i = 0;
	charact = (char*)malloc(sizeof(char) * 4);
	while (str[i] != '\n')
		i++;
	i--;
	charact[0] = str[i - 2];
	charact[1] = str[i - 1];
	charact[2] = str[i];
	charact[3] = '\0';
	return (charact);
}
