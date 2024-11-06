/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:54:55 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/06 08:55:52 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_isnumber(char *number)
{
	int	i;

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
