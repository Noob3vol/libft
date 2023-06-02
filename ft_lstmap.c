/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 07:48:14 by iguidado          #+#    #+#             */
/*   Updated: 2019/11/27 16:00:10 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*crawl;

	if (!lst || !(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	crawl = new;
	while (lst)
	{
		crawl->content = f(lst->content);
		lst = lst->next;
		if (lst)
		{
			if (!(crawl->next = (t_list *)malloc(sizeof(t_list))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			crawl = crawl->next;
		}
	}
	crawl->next = NULL;
	return (new);
}
