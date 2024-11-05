/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 07:42:16 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/05 17:45:49 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	swap(t_stacks **stack)
{
	t_stacks	*head;
	t_stacks	*next;
	int			temp_value;
	int			temp_index;

	if (ft_lstsize(*stack) < 2)
		return (OH_NO);
	head = *stack;
	next = head->next;
	if (!head && !next)
		error_swap();
	temp_value = head->val;
	temp_index = head->index;
	head->val = next->val;
	head->index = next->index;
	next->val = temp_value;
	next->index = temp_index;
	return (EXIT_SUCCESS);
}

int	push(t_stacks **stack_to, t_stacks **stack_from)
{
	t_stacks	*temp;
	t_stacks	*head_to;
	t_stacks	*head_from;

	if (ft_lstsize(*stack_from) == 0)
		return (OH_NO);
	head_to = *stack_to;
	head_from = *stack_from;
	temp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = temp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		temp->next = head_to;
		*stack_to = temp;
	}
	return (EXIT_SUCCESS);
}

int	rotate(t_stacks **stack)
{
	t_stacks	*head;
	t_stacks	*tail;

	if (ft_lstsize(*stack) < 2)
		return (OH_NO);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (EXIT_SUCCESS);
}

int	reverse_rotate(t_stacks **stack)
{
	t_stacks	*head;
	t_stacks	*tail;

	if (ft_lstsize(*stack) < 2)
		return (OH_NO);
	head = *stack;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (EXIT_SUCCESS);
}

void	print_sign(t_stacks *head)
{
	t_stacks	*temp;

	temp = head;
	while (head)
	{
		ft_putnbr_fd(temp->val, 1);
		ft_putendl_fd("", 1);
		temp = temp-> next;
	}
}
