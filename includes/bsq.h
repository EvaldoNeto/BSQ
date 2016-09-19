/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:05:05 by eneto             #+#    #+#             */
/*   Updated: 2016/09/19 17:46:36 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_realloc(char *str, int buff);
char	*ft_join(char *s1, char *s2);

char	*file_to_string(char *name_file, char *str);

#endif
