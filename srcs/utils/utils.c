

#include "../../includes/push_swap.h"

void    ft_free(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i >= 0)
        free(str[i--]);
}

int     is_sorted(t_stacks **stack)
{
    t_stacks *head;

    head = *stack;
    while (head && head->next)
    {
        if (head->val > head->next->val)
            return (EXIT_SUCCESS);
        head = head->next;
    }
    return (EXIT_FAILURE);
}

int     get_distance(t_stacks **stack, int index)
{
    t_stacks *head;
    int     distance;

    distance = 0;
    head = *stack;
    while (head)
    {
        if (head->index == index)
            break ;
        distance++;
        head = head->next;
    }
    return (distance);
}

void    make_top(t_stacks **stack, int distance)
{
    t_stacks *head;
    int      temp;

    if (distance == 0)
        return ;
    head = *stack;
    temp = ft_lstsize(head) - distance;
    if (distance <= (ft_lstsize(head) / 2))
    {
        while (distance-- > 0)
            ra(stack);
    }
    else
    {
        while (temp-- > 0)
            rra(stack);
    }
}

void    free_stack(t_stacks **stack)
{
    t_stacks    *head;
    t_stacks    *temp;

    head = *stack;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    free(stack);
}