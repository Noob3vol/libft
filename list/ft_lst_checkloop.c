/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_checkloop.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <iguidado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:00:34 by iguidado          #+#    #+#             */
/*   Updated: 2022/03/03 18:05:25 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_lst_checkloop(t_list *lst)
{
	t_list *fast_ptr;
	t_list *slow_ptr;

	fast_ptr = lst;
	slow_ptr = lst;
	while (fast_ptr)
	{
		if (fast_ptr->next)
			fast_ptr = fast->next;
		if (fast_ptr->next)
			fast_ptr = fast->next;
		slow_ptr = slow_ptr->next;
		if (fast_ptr && slow_ptr == fast_ptr)
			return (1);
	}
	return (0);
}
