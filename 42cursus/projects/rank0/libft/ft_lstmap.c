/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:38:57 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/02 16:09:51 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* iterate the list 'lst' apply fn 'f' to content and create new list         */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new;
	void	*temp;

	start = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = (*f)(lst->content);
		new = ft_lstnew(temp);
		if (!new)
		{
			del(temp);
			ft_lstclear(&start, (*del));
			return (start);
		}
		ft_lstadd_back(&start, new);
		lst = lst->next;
	}
	return (start);
}
