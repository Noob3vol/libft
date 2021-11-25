/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:16:50 by iguidado          #+#    #+#             */
/*   Updated: 2021/11/25 07:51:48 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_toupper_old(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c &= 0xDF;
	return (c);
}

/*
**	#include "unistd.h"
**	int	main(void)
**	{
**		char min;
**		char capit;
**	
**		min = 'a' - 1;
**		while (++min <= 'z')
**		{
**			capit = ft_toupper(min);
**			write(1, &capit, 1);
**		}
**		return (0);
**	}
*/
