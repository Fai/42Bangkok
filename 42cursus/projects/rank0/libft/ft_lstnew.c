/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:50:00 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:13:17 by rpithaks         ###   ########.fr       */
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
