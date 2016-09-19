/*
* This function will transform a string of characters in an 
* bi-dimensional array of ints (0 and 1).
*
*/

#include "../includes/bsq.h"

int     **get_array(char *str)
{
    int     i;
    int     j;
    int     x;
    int     **result;
    
    result = (int **)malloc(sizeof(int *) * 10);
    i = 0;
    j = 0;
    x = 0;
    while (*str != '\n')
        str++;
    str++;
    while (str[x] != '\0')
    {
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
