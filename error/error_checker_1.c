#include "../includes/push_swap.h"

void    wrong_input(int sign)
{
    if (sign == 1)
    {
        print_error();
        printf("Your execution should be like this:\n");
        printf("./push_swap num1 num2 num3 num4 num5 num6\n");
    }
}

void    print_error(void)
{
    printf("Error\n");
}