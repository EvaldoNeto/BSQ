/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_header.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 21:42:15 by eneto             #+#    #+#             */
/*   Updated: 2016/09/20 21:43:34 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*read_header(char *str)
{
	char	*charact;
	int		i;

	i = 0;
	charact = (char*)malloc(sizeof(char) * 3);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	charact[0] = str[i];
	charact[1] = str[i + 1];
	return (charact);
}
