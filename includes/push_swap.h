/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:54:54 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/08 09:36:09 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../Libft/libft.h"
# include "../ft_printf/ft_printf.h"
# define OH_NO -1

typedef struct s_stacks
{
	int				val;
	int				index;
	struct s_stacks	*next;
}	t_stacks;
void		print_error(void);
void		error_swap(void);
void		ft_args_checker(int argc, char *argv[]);
void		num_handler(int iterator, char *args[]);
char		**args_splitter(char *args[]);
long		ft_atol(const char *str);
int			ft_isnumber(char *number);
int			ft_contains_num(int num, char *argv[], int i);
void		ft_free(char **str);
int			is_sorted(t_stacks **stack);
int			get_distance(t_stacks **stack, int index);
void		make_top(t_stacks **stack, int distance);
void		free_stack(t_stacks **stack);
void		index_stack(t_stacks **stack);
t_stacks	*ft_lstnew(int content);
void		ft_lstadd_front(t_stacks **stack, t_stacks *new);
t_stacks	*ft_lstlast(t_stacks *head);
void		ft_lstadd_back(t_stacks **stack, t_stacks *new);
int			ft_lstsize(t_stacks *lst);
void		radix_sort(t_stacks **stack_a, t_stacks **stack_b);
void		sort_3_ex(t_stacks **stack_a, t_stacks *head, int min);
void		simple_sort(t_stacks **stack_a, t_stacks **stack_b);
void		printList(t_stacks *head);
int			swap(t_stacks **stack);
int			push(t_stacks **stack_to, t_stacks **stack_from);
int			rotate(t_stacks **stack);
int			reverse_rotate(t_stacks **stack);
int			sa(t_stacks **stack_a);
int			sb(t_stacks **stack_b);
int			ss(t_stacks **stack_a, t_stacks **stack_b);
int			pa(t_stacks **stack_a, t_stacks **stack_b);
int			pb(t_stacks **stack_a, t_stacks **stack_b);
int			ra(t_stacks **stack_a);
int			rb(t_stacks **stack_b);
int			rr(t_stacks **stack_a, t_stacks **stack_b);
int			rra(t_stacks **stack_a);
int			rrb(t_stacks **stack_b);
int			rrr(t_stacks **stack_a, t_stacks **stack_b);
#endif
