/*
* 
* This function will print the arrays for testing / debug purpose
* 
*/

#include "../includes/bsq.h"

#include <stdio.h>

void    print_array(int **array)
{
    int     i;
    
    i = 0;
    while (array[i])
    {
        while (array[i][j])
        {
            printf("%d",array[i]);
            j++;
        }
        j = 0;
        i++;
    }
}
