/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contains_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:14:15 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/06 09:15:45 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_contains_num(int num, char *argv[], int i)
{
	i += 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i += 1;
	}
	return (0);
}
