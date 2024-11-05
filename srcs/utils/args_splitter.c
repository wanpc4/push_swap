/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_splitter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- wwan-ab-@student.42kl.edu.my      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:58:54 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/04 17:58:58 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char    **args_splitter(char *args[])
{
	char	**result;
	result = ft_split(args[1], ' ');
	return (result);
}