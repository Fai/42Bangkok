/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:41:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/29 20:17:08 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# define BUFF_SIZE 1024

int     ft_parse_input(char *mapfile, char **map, char *pattern);
int     ft_set_pattern(char buffer[BUFF_SIZE], int *mapsize, char *pattern);
void    **ft_set_map(char buffer[BUFF_SIZE], char *pattern, char **map, int *mapsize);
int     ft_map_is_valid(char **map, char *pattern);
int     ft_calculate_square(char **map, char *pattern);
int	    ft_print_result(char **map);

#endif