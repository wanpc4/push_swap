

#include "../../../includes/push_swap.h"

/*
    t_stacks    *ft_lstnew(int content);
    void        ft_lstadd_front(t_stacks **stack, t_stacks *new);
    t_stacks    *ft_lstlast(t_stacks *head);
    void        ft_lstadd_back(t_stacks **stack, t_stacks *new);
    int         ft_lstsize(t_stacks *lst);
*/

t_stacks    *ft_lstnew(int content)
{
    // t_stacks *new;

    // new = (t_stacks *) malloc(sizeof(t_stacks));
    // if (new == NULL)
    //     return (NULL);
    // new -> val = content;
    // new -> next = NULL;
    // return (new);
    t_stacks	*new;

	new = (t_stacks *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->val = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void    ft_lstadd_front(t_stacks **stack, t_stacks *new)
{
    // if (stack && new)
    // {
    //     new -> next = *stack;
    //     *stack = new;
    // }
    new->next = *stack;
	*stack = new;
}

t_stacks    *ft_lstlast(t_stacks *head)
{
    // while (head)
    // {
    //     if (!head -> next)
    //     {
    //         return (head);
    //     }
    //     head = head -> next;
    // }
    // return (head);
    t_stacks	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void    ft_lstadd_back(t_stacks **stack, t_stacks *new)
{
    // t_stacks *lastnode;

    // if (stack)
    // {
    //     if (*stack)
    //     {
    //         lastnode = ft_lstlast(*stack);
    //         lastnode -> next = new;
    //     }
    //     else
    //     {
    //         *stack = new;
    //     }
    // }
    t_stacks	*n;

	if (*stack)
	{
		n = ft_lstlast(*stack);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int ft_lstsize(t_stacks *lst)
{
    size_t count;

    count = 0;
    while (lst)
    {
        lst = lst -> next;
        count++;
    }
    return (count);

    // size_t	i;
	// t_stacks	*tmp;

	// tmp = lst;
	// i = 0;
	// while (tmp)
	// {
	// 	tmp = tmp->next;
	// 	i++;
	// }
	// return (i);
}

void	printList(t_stacks *head)
{
	t_stacks	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->val, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}
