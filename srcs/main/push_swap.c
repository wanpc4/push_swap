/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:56:15 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/04 08:47:56 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

static void form_stack(t_stacks **stack, int argc, char *argv[])
{
    t_stacks    *new;
    char        **args;
    int         i;

    i = 0;
    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
    {
        i = 1;
        args = argv;
    }
    while (args[i])
    {
        new = ft_lstnew(ft_atoi(args[i]));
        ft_lstadd_back(stack, new);
        i++;
    }
    index_stack(stack);
    if (argc == 2)
        ft_free(args);
}

static void sort_stack(t_stacks **stack_a, t_stacks **stack_b)
{
    if (ft_lstsize(*stack_a) <= 5)
        simple_sort(stack_a, stack_b);
    else
        radix_sort(stack_a, stack_b);
}

int main(int argc, char *argv[])
{
    t_stacks    **stack_a;
    t_stacks    **stack_b;

    if (argc < 2)
        return (OH_NO);
    ft_args_checker(argc, argv);
    stack_a = (t_stacks **)malloc(sizeof(t_stacks));
    stack_b = (t_stacks **)malloc(sizeof(t_stacks));
    *stack_a = NULL;
    *stack_b = NULL;
    form_stack(stack_a, argc, argv);
    if (is_sorted(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        return (EXIT_SUCCESS);
    }
    sort_stack(stack_a, stack_b);
    free_stack(stack_a);
    free_stack(stack_b);
    return (EXIT_SUCCESS);
}