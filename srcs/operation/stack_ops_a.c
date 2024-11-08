/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 07:43:48 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/08 09:15:23 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	sa(t_stacks **stack_a)
{
	if (swap(stack_a) == -1)
		return (OH_NO);
	ft_putendl_fd("sa", 1);
	return (EXIT_SUCCESS);
}

int	pa(t_stacks **stack_a, t_stacks **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (OH_NO);
	ft_putendl_fd("pa", 1);
	return (EXIT_SUCCESS);
}

int	ra(t_stacks **stack_a)
{
	if (rotate(stack_a) == -1)
		return (OH_NO);
	ft_putendl_fd("ra", 1);
	return (EXIT_SUCCESS);
}

int	rra(t_stacks **stack_a)
{
	if (reverse_rotate(stack_a) == -1)
		return (OH_NO);
	ft_putendl_fd("rra", 1);
	return (EXIT_SUCCESS);
}
