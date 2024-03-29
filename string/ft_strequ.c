/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 03:53:23 by iguidado          #+#    #+#             */
/*   Updated: 2022/03/03 18:02:03 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strequ(char *str_ref, char *str)
{
	if (str_ref == str)
		return (1);
	if (!str_ref || !str)
		return (0);
	while (*str_ref && *str == *str_ref)
	{
		str++;
		str_ref++;
	}
	if (!*str_ref && !*str)
		return (1);
	return (0);
}
