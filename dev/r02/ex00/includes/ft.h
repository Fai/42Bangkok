/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:57:23 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/26 21:25:42 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_nbr
{
	char	*numeric;
	char	*written;
}	t_nbr;

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strncpy_nt(char *dest, char *src, unsigned int n);
char	**ft_split(char *str, char *charset);
int		ft_arraylen(char **array);
int		is_valid_input(char *str);
char	**parse_input(char *str);
t_nbr	**parse_dict(char *filename);

#endif
