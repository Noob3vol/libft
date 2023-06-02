/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 21:31:07 by iguidado          #+#    #+#             */
/*   Updated: 2019/11/27 13:44:17 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *beg;

	if (alst)
	{
		if (!*alst)
			*alst = new;
		else
		{
			beg = *alst;
			while ((*alst)->next)
				*alst = (*alst)->next;
			(*alst)->next = new;
			*alst = beg;
		}
	}
}
