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

#include <stdlib.h>
#include <unistd.h>

typedef struct   s_square
{
    int size_x;
    int size_y;
    int **array;
}               t_square;

void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_realloc(char *str, int buff);
char	*ft_join(char *s1, char *s2);
void    print_array(int **array, int size_x, int size_y);
int     *square_find(int **user_input, int size_x, int size_y);
int     **get_array(char *str, int *size);
void    print_result(char *user_input, int pos_x, int pos_y, int size);
void     ft_putchar(char c);
void	ft_putnbr(int num);
char	*file_to_string(char *name_file, char *str); // I did put something like this in the main
int     *measure_size(char *str);

#endif
