/*
* This function will transform a string of characters in an 
* bi-dimensional array of ints (0 and 1).
*
*/

#include "../includes/bsq.h"
#include <stdio.h>


int     *measure_size(char *str)
{
    int     *size;
    
    size = (int *)malloc(sizeof(int) * 2);
    size[0] = 0;
    size[1] = 0;
    while (*str)
    {
        if (*str == '\n')
            size[0] += 1;
        str++;
        size[1] += 1; 
    }
    size[0]--;
    size[1] = (size[1] - size[0]) / size[0];
    return (size);
}

int     **get_array(char *str, int *size)
{
    int     i;
    int     j;
    int     x;
    int     **result;
    
    result = (int **)malloc(sizeof(int *) * size[0]);
    i = 0;
    j = 0;
    x = 0;
    //this ignores the first line
    while (*str != '\n')
        str++;
    str++;
    while (str[x] != '\0')
    {
        result[i] = (int *)malloc(sizeof(int) * size[1]);
        while (str[x] != '\n')
        {
            if (str[x] == '.')
                result[i][j] = 1;
            else if (str[x] == 'o')
                result[i][j] = 0;
            x++;
            j++;
        }
        i++;
        x++;
        j = 0;
    }
    return (result);
}