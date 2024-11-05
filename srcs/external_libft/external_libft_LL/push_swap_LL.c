/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_LL.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:49:53 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/05 16:47:58 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

t_stacks	*ft_lstnew(int content)
{
	t_stacks	*new;

	new = (t_stacks *) malloc(sizeof(t_stacks));
	if (!new)
		return (NULL);
	new -> val = content;
	new -> index = -1;
	new -> next = NULL;
	return (new);
}

void	ft_lstadd_front(t_stacks **stack, t_stacks *new)
{
	if (stack && new)
	{
		new->next = *stack;
		*stack = new;
	}
}

t_stacks	*ft_lstlast(t_stacks *head)
{
	t_stacks	*temp;

	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (temp);
	}
	return (temp);
}

void	ft_lstadd_back(t_stacks **stack, t_stacks *new)
{
	t_stacks	*lastnode;

	if (stack)
	{
		if (*stack)
		{
			lastnode = ft_lstlast(*stack);
			lastnode -> next = new;
			new->next = NULL;
		}
		else
		{
			*stack = new;
			(*stack)->next = NULL;
		}
	}
}

int	ft_lstsize(t_stacks *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
