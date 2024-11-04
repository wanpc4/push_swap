/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:34:45 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/01 17:34:47 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int     rr(t_stacks **stack_a, t_stacks **stack_b)
{
    if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
        return (OH_NO);
    rotate(stack_a);
    rotate(stack_b);
    ft_putendl_fd("rr", 1);
    return (EXIT_SUCCESS);
}

int     ss(t_stacks **stack_a, t_stacks **stack_b)
{
    if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
        return (OH_NO);
    swap(stack_a);
    swap(stack_b);
    ft_putendl_fd("ss", 1);
    return (EXIT_SUCCESS);
}

int     rrr(t_stacks **stack_a, t_stacks **stack_b)
{
    if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
        return (OH_NO);
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_putendl_fd("rrr", 1);
    return (EXIT_SUCCESS);
}