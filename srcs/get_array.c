/*
* This function will transform a string of characters in an 
* bi-dimensional array of ints (0 and 1).
*
*/

int     **get_array(char *str)
{
    int     i;
    int     j;
    int     x;
    int     **result;
    
    i = 0;
    j = 0;
    x = 0;
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
        x++;
        i++;
        j = 0;
    }
    return (result);
}
