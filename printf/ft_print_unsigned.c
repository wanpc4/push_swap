/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:21:16 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/08/02 18:10:06 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_number(unsigned int num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

char	*ft_uitoa(unsigned int num)
{
	int				length;
	char			*number;
	unsigned int	n;

	length = ft_length_number(num);
	number = (char *)malloc(sizeof(char) * (length + 1));
	if (!number)
		return (0);
	number[length] = '\0';
	n = num;
	while (n > 0)
	{
		number[length - 1] = n % 10 + '0';
		n = n / 10;
		length--;
	}
	return (number);
}

int	ft_print_unsigned(unsigned int num)
{
	int		count;
	char	*number;

	count = 0;
	if (num == 0)
		count += write(1, "0", 1);
	else
	{
		number = ft_uitoa(num);
		if (number)
		{
			count += write(1, number, ft_length_number(num));
			free(number);
		}
	}
	return (count);
}
