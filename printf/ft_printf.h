/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:54:58 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/08/06 08:09:18 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./Libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_specifier(va_list args, const char data);
int		ft_print_character(int c);
int		ft_print_string(char *str);
int		ft_print_number(int number);
int		ft_length_number(unsigned int num);
char	*ft_uitoa(unsigned int num);
int		ft_print_unsigned(unsigned int num);
int		ft_pointer_length(uintptr_t num);
void	ft_put_pointer(uintptr_t num);
int		ft_print_pointer(unsigned long long pointer);
int		ft_hex_length(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);

#endif
