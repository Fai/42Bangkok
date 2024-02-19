/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:41:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 16:39:25 by wsiriyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* BUFF_SIZE
 * 104857600
 * 131072
*/

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# define BUFF_SIZE 2097152

typedef struct s_square
{
	int	x;
	int	y;
	int	length;
}	t_square;

typedef struct s_pattern
{
	char	char_empty;
	char	char_obstacle;
	char	char_full;
}	t_pattern;

typedef struct s_map
{
	int			**field;
	int			field_row;
	int			field_col;
	t_pattern	pattern;
	t_square	square;
}	t_map;

char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);
int		ft_set_pattern(char *file_data, t_map *map);
int		ft_set_map(char **file_data, t_map *map);
int		ft_parse_input(char *mapfile, t_map *map);
int		ft_print_result(t_map *map);
void	ft_free_map(t_map *map);
int		ft_str_is_printable(char *str);
int		ft_min(t_map *map, int row, int col);
int		ft_fill_map(char **file_data, t_map *map, int row);
void	ft_start_one(t_map *map);
void	ft_start_many(char *mapname, t_map *map);
void	ft_reset_map(t_map *map);
int		ft_read_file(char *file_name);

#endif
