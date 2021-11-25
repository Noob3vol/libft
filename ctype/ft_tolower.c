/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:34:52 by iguidado          #+#    #+#             */
/*   Updated: 2021/11/25 07:58:13 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_tolower_old(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c |= 0x20;
	return (c);
}

/*	
**	#include "unistd.h"
**
**	int	main(void)
**	{
**		char capit;
**		char min;
**
**	       capit = 'A' - 1;
**		while (++capit <= 'Z')
**		{
**			min = ft_tolower(capit);
**			write(1, &min, 1);
**		}
**		return (0);
**	}
*/
