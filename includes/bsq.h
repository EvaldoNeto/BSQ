/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:05:05 by eneto             #+#    #+#             */
/*   Updated: 2016/09/21 20:38:38 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_square
{
	int size_x;
	int size_y;
	int **array;
}				t_square;

void			ft_putstr(char *str);
void			ft_puterror(char *str);
int				ft_strlen(char *str);
char			*ft_realloc(char *str, int buff, int size);
char			*ft_join(char *s1, char *s2, int size);
void			print_array(int **array, int size_x, int size_y);
int				*square_find(int **user_input, int size_x,
								int size_y, int biggest);
int				**get_array(char *str, int *size, int i[2], char *c);
void			print_result(int **matched, int *size, int *pos, char *c);
void			ft_putchar(char c);
void			ft_putnbr(int num);
char			*file_to_string(char *name_file, char *str);
int				*measure_size(char *str, int i);
int				**make_square(int **user_input, int size_y, int size_x);
char			*read_header(char *str);
int				ft_atoi(char *str);

#endif
