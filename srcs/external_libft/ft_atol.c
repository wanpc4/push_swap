/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:45:46 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/01 17:45:48 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

long    ft_atol(const char *str)
{
    long    count;
    long    sign;
    long    converter;

    count = 0;
    sign = 1;
    converter = 0;

    while ((str[count] == ' ') || (str[count] >= '\t' && str[count] <= '\r'))
        count++;
    if (str[count] == '-' || str[count] == '+')
    {
        if (str[count] == '-')
            sign = -1;
        count++;
    }
    while ((str[count] >= '0') && (str[count] <= '9'))
    {
        converter = (converter * 10) + (str[count] - '0');
        count++;
    }
    return (converter * sign);
}
