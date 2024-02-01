/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/27 06:11:50 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

voidbtree_apply_by_level(t_btree *root,void(*applyf)(void*item,intcurrent_level,intis_first_elem))