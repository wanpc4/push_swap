/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:54:54 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/04 09:14:16 by wwan-ab-         ###   ########.fr       */
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
    int val;
    int index;
    struct s_stacks *next;
}   t_stacks;

//Error checker
void    print_error(void);
void    error_swap(void);

//Utilities
void    ft_args_checker(int argc, char *argv[]);
void    num_handler(int iterator, char *args[]);
char    **args_splitter(char *args[]);

//External Libft functions
long    ft_atol(const char *str);
int     ft_isnumber(char *number);
int     ft_contains_num(int num, char *argv[], int i);

void    ft_free(char **str);
int     is_sorted(t_stacks **stack);
int     get_distance(t_stacks **stack, int index);
void    make_top(t_stacks **stack, int distance);
void    free_stack(t_stacks **stack);
void    index_stack(t_stacks **stack);

t_stacks    *ft_lstnew(int content);
void        ft_lstadd_front(t_stacks **stack, t_stacks *new);
t_stacks    *ft_lstlast(t_stacks *head);
void        ft_lstadd_back(t_stacks **stack, t_stacks *new);
int         ft_lstsize(t_stacks *lst);
void        radix_sort(t_stacks **stack_a, t_stacks **stack_b);
//void        ft_check_args(int argc, char *argv[]);
void        sort_3_ex(t_stacks **stack_a, t_stacks *head, int min);
void        sort_5(t_stacks **stack_a, t_stacks **stack_b);
void        simple_sort(t_stacks **stack_a, t_stacks **stack_b);
void        printList(t_stacks *head);

//Operation that will be displayed in shell
//This is what makes push_swap happens
int     swap(t_stacks **stack);
int     push(t_stacks **stack_to, t_stacks **stack_from);
int     rotate(t_stacks **stack);
int     reverse_rotate(t_stacks **stack);

int     sa(t_stacks **stack_a); //swap a
int     sb(t_stacks **stack_b); //swap b
int     ss(t_stacks **stack_a, t_stacks **stack_b); //swap a and b together
int     pa(t_stacks **stack_a, t_stacks **stack_b); //push to a
int     pb(t_stacks **stack_a, t_stacks **stack_b); //push to b
int     ra(t_stacks **stack_a); //rotate a for 1 step
int     rb(t_stacks **stack_b); //rotate b for 1 step
int     rr(t_stacks **stack_a, t_stacks **stack_b); //rotate a and b together
int     rra(t_stacks **stack_a); //same like (ra) but reverse
int     rrb(t_stacks **stack_b); //same like (ra) but reverse
int     rrr(t_stacks **stack_a, t_stacks **stack_b); //rotate a and b together

#endif
