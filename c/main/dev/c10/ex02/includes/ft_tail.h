/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/01 19:39:18 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>

#define DEFAULT_TAIL_BYTES 1024000

int	    ft_atoi(char	*str);
int	    ft_strcmp(char *s1, char *s2);
int	    ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_put_error(char *filename);
char	**ft_split(char *str, char *charset);
void	split_words(char **array, char *str, char *charset);
void	copy_word(char *dest, char *src, char *charset);
int	    total_words(char *str, char *charset);
int	    check_sep(char c, char *charset);

#endif