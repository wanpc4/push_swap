/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:00:31 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/06 09:26:01 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	num_handler(int iterator, char *args[])
{
	long	result;

	while (args[iterator])
	{
		result = ft_atoi(args[iterator]);
		if (!ft_isnumber(args[iterator]))
			print_error();
		if (ft_contains_num(result, args, iterator))
			print_error();
		if (result < (long)-2147483648 || result > (long)2147483647)
			print_error();
		iterator++;
	}
}

void	ft_args_checker(int argc, char *argv[])
{
	int		i;
	char	**args;

	i = 0;
	if (argc == 2)
		args = args_splitter(argv);
	else
	{
		i = 1;
		args = argv;
	}
	num_handler(i, args);
	if (argc == 2)
		ft_free(args);
}
