/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:54:07 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/08 09:26:46 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static	int	get_max_bit(t_stacks **stack)
{
	t_stacks	*head;
	int			max;
	int			max_bit;

	head = *stack;
	max = head->index;
	max_bit = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	radix_sort(t_stacks **stack_a, t_stacks **stack_b)
{
	t_stacks	*head_a;
	int			i;
	int			j;
	int			size;
	int			max_bit;

	i = 0;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	max_bit = get_max_bit(stack_a);
	while (i < max_bit)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (head_a && ((head_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
