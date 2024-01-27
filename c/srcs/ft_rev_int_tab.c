/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:40:40 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/20 02:20:42 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*head;
	int	*tail;
	int	num;

	head = tab;
	if (size > 0)
	{
		tail = head + size - 1;
	}
	else
	{
		tail = head;
	}
	num = 0;
	while (head < tail)
	{
		num = *head;
		*head = *tail;
		*tail = num;
		head++;
		tail--;
	}
}
