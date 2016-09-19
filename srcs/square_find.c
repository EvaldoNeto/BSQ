/*
* Square matching algorithm!
* Will return the position (top-down / left-right) of the biggest square found.
* The return value will be a string of two integers.
* It will receive the entire matrix of integers (0 and 1) as an input.
*/

#include "includes/bsq.h"

int     *square_find(int **user_input, int size_x, int size_y)
{
    int     i;
    int     j;
    int     pos_x;
    int     pos_y;
    int     biggest;
    int     **matched;
    
    i = 0;
    j = 1; // as we will start scaning from the second column
    
    // Here we will transcribe the values recived to the first
    // line and column of the "matched"array
    while (user_input[0][i] != '\0')
    {
        matched[0][i] = user_input[0][i];
        i++;
    }
    i = 0; // reinitialize the counter so we can user afterwards
    while (user_input[i][0] != '\0')
    {
        matched[i][0] = user_input[i][0];
        i++;
    }
    // Will do the scan and create the array with the answers
    i = 1; // as we will start scaning from the second line
    while (i <= size_y)
    {
    
        while (j <= size_x)
        {
            if (user_input[i][j] == 0) //if we find an obstacle we just go verify the next one
                matched[i][j] == 0;
            else if (matched[i - 1][j - 1] == matched[i][j - 1] && matched[i - 1][j - 1] == matched[i - 1][j])
                matched[i][j] = matched[i - 1][j - 1] + 1;
            j++;
        }
        j = 0;
        i++;
    }
    //here we will scan the resultung "matched"for the biggest result
    // from end to beggining. Like this the first to appear will stay
    biggest = 1;
    while (i >= 0)
    {
        while (j >= 0)
        {
            if (matched[i][j] > biggest)
            {
                biggest = macthed[i][j];
                pos_x = j - biggest;
                pos_y = i - biggest;
            }
            j--;
        }
        j = size_x;
        i--;
    }
    return (pos_x, pos_y)
}

