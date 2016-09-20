#include "../includes/bsq.h"

int	ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	number = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	return (number);
}