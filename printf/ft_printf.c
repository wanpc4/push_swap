/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:59:38 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/08/06 08:00:53 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		length;
	int		i;
	va_list	args;

	length = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += ft_specifier(args, format[i + 1]);
			i++;
		}
		else
			length += ft_print_character(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}

int	ft_specifier(va_list args, const char data)
{
	int	count;

	count = 0;
	if (data == 'c')
		count += ft_print_character(va_arg(args, int));
	else if (data == 's')
		count += ft_print_string(va_arg(args, char *));
	else if (data == 'i' || data == 'd')
		count += ft_print_number(va_arg(args, int));
	else if (data == 'p')
		count += ft_print_pointer(va_arg(args, unsigned long long));
	else if (data == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (data == 'x')
		count += ft_print_hex(va_arg(args, unsigned int), data);
	else if (data == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), data);
	else if (data == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_print_character(int c)
{
	write(1, &c, 1);
	return (1);
}
