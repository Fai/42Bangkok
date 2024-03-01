/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:38:57 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:19:53 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* iterate the list 'lst' apply fn 'f' to content and create new list         */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new;

	start = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstdelone(new, (*del));
			ft_lstclear(&start, (*del));
			return (start);
		}
		ft_lstadd_back(&start, new);
		lst = lst->next;
	}
	return (start);
}
