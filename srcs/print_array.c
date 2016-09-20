/*
* 
* This function will print the arrays for testing / debug purpose
* 
*/

#include "../includes/bsq.h"

#include <stdio.h>

void    print_array(int **array, int size_y, int size_x)
{
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (i < size_y)
    {
        while (j < size_x)
        {
            ft_putnbr(array[i][j]);
            j++;
        }
        ft_putchar('\n');
        j = 0;
        i++;
    }
}
