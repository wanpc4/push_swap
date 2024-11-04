/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 07:42:08 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/01 07:42:11 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int     sb(t_stacks **stack_b)
{
    if (swap(stack_b) == -1)
        return (OH_NO); //Failure
    ft_putendl_fd("sb", 1);
    return (EXIT_SUCCESS); //Success
}

int     pb(t_stacks **stack_a, t_stacks **stack_b)
{
    if (push(stack_b, stack_a) == -1)
        return (OH_NO);
    ft_putendl_fd("pb", 1);
    return (EXIT_SUCCESS);
}

int     rb(t_stacks **stack_b)
{
    if (rotate(stack_b) == -1)
        return (OH_NO);
    ft_putendl_fd("rb", 1);
    return (EXIT_SUCCESS);
}

int     rrb(t_stacks **stack_b)
{
    if (reverse_rotate(stack_b) == -1)
        return (OH_NO);
    ft_putendl_fd("rrb", 1);
    return (EXIT_SUCCESS);
}