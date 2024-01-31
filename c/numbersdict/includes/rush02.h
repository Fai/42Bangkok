/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 09:03:43 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/29 14:53:59 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# define BUFF_SIZE 1024

typedef struct dict
{
	char	*key;
	char	*value;
}	t_dict;

typedef struct triplets
{
	char	triplet[4];
	int		index;
}	t_triplets;

char		**ft_split(char *str, char *sep);
int			ft_get_start(int argc, char **argv, t_triplets **trip);
int			ft_div_start(char *start, t_triplets **trip);
void		ft_create_key(t_dict *dict, char *str);
void		ft_set_trip(char *str, int size, t_triplets *trip, int trip_size);
void		ft_create_value(t_dict *dict, char *str);
void		ft_create_list(t_dict *dict_list, char **result);
void		ft_display_result(t_dict *dict, int dict_size, t_triplets *trip);
char		*get_value(t_dict *dict_list, int size, char *key);
char		*nb_to_str(char *buff, int size, int nb);
void		ft_free_split(char **result);
void		ft_free_dict(t_dict *dict);
int			ft_strlen(char *str);
int			ft_valid_start(char *str);
int			is_numchar(char c);
int			ft_strcmp(char *s1, char *s2);
void		ft_putstr(char *str);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_get_unit(t_dict *dict, int size, int index);
void		put_word(t_dict *dict, int size, int nb);
void		put_unit(t_dict *dict, int size, int index);
int			ft_parse_number(char *str);
int			ft_os_dict(t_dict **dict, int argc, char **argv);
int			ft_get_offset(int size);
#endif
