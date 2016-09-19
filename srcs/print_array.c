/*
* 
* This function will print the arrays for testing / debug purpose
* 
*/

#include "includes/bsq.h"

#include <stdio.h>

void    print_array(char **array)
{
    int     i;
    
    i = 0;
    while (array[i] != '\0')
    {
        prinf("%s\n",array[i]);
        i++;
    }
}
