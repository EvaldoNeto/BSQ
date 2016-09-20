/*
* Once we know where the biggest sqaure is we will 
* print it in the expected output format.
* 
*/

#include "../includes/bsq.h"
#include <stdio.h>

void    print_result(char *user_input, int pos_y, int pos_x, int size)
{
    int     i;
    int     l;
    
    i = 0;
    l = 1;
    
    printf("%d  %d  %d\n",pos_y, pos_x, size);
    while (user_input[i] != '\0')
    {
    
            
        if (i / l <= (pos_x + size) && l <= (pos_y + size))
            ft_putchar('X');
        else
            ft_putchar(user_input[i]);
            
        if (user_input[i] == '\n')
            l++;
            
        i++;
    }
    ft_putchar('\n');
}

