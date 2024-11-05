/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:00:31 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/04 09:13:38 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_contains(int num, char *argv[], int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static  int ft_isnumber(char *number)
{
    int i;

    i = 0;
    if (number[0] == '-')
        i += 1;
    while (number[i])
    {
        if (!ft_isdigit(number[i]))
            return (0);
        i += 1;
    }
    return (1);
}

void	num_handler(int iterator, char *args[])
{
	long	result;

	while (args[iterator])
	{
		result = ft_atoi(args[iterator]);
		if (!ft_isnumber(args[iterator]))
			print_error();
		if (ft_contains(result, args, iterator))
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
