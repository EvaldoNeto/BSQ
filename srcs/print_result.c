/*
* Once we know where the biggest sqaure is we will 
* print it in the expected output format.
* 
*/

#include "../includes/bsq.h"

void    print_result(char **user_input, int pos_x, int pos_y, int size)
{
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (user_input[i] != '\0')
    {
        while (user_input[i][j] != '\0')
        {
            if (i <= (pos_x + size) && j <= (pos_y + size))
                ft_putchar('X');
            else
                ft_putchar(user_input[i][j]);
            j++;
        }
        i++;
        ft_putchar('\n');
        j = 0;
    }
    ft_putchar('\n');
}