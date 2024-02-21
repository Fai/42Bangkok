/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:50:00 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/21 15:06:54 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocate with malloc and return a new node                                 */
/* member variable 'content' is init with value of 'content' & 'next to NULL  */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
