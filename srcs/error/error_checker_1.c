/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:55:16 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/10/30 11:58:49 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    print_error(void)
{
    ft_printf("Error\n");
    exit(EXIT_FAILURE);
}

void    error_swap(void)
{
    ft_printf("Error while swapping\n");
    exit(EXIT_FAILURE);
}