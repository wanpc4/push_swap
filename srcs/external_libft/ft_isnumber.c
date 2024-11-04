

#include "../../includes/push_swap.h"

static  int ft_isnumber(char *number)
{
    int i;

    i = 0;
    if (number[0] == '-')
        i++;
    while (number[i])
    {
        if (!ft_isnumber(number[i]))
            return (0);
        i++;
    }
    return (1);
}