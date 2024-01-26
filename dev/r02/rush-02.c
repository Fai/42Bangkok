/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:12:05 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/27 05:59:20 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 256
/*
typedef struct s_dict_entry
{
	char	*key;
	char	*value;
	struct s_dict_entry	*next;
}	t_dict_entry;

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (*str)
	{
		s++;
	}
	return (s);
}

int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n')
	{
		return (1);
	}
	if (c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

char* ft_strtok(char* str, const char* delim)
{
	static char*	p;
	
	if (str) 
		p = str;
	else if (!p)
		return NULL;

	char* start = p;
	while (*p) 
	{
		const char* d;
		
		d = delim;
		while (*d) 
		{
			if (*p == *d)
			{
				*p++ = '\0';
                return (start);
			}
			++d;
		}
		++p;
	}
	return (start);
}

char *get_key(char *line)
{
    char *key = ft_strtok(line, ":");
    if (key)
    {
        while (ft_isspace((unsigned char)key[ft_strlen(key) - 1]))
        {
            key[ft_strlen(key) - 1] = '\0';
        }
    }
    return key;
}

char *get_value(char *line)
{
    char *value = ft_strtok(NULL, "\n");
    if (value)
    {
        
        while(ft_isspace((unsigned char)*value)) 
        {
            value++;
        }
    }
    return value;
}
*/
t_dict_entry *parse_dictionary(char *filename)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;
	t_dict_entry *head = NULL;
    t_dict_entry *current;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, &bytes_read, 11);
		// current = malloc(sizeof(t_dict_entry));
		// current->key = get_key(buffer);
		// current->value = get_value(buffer);
		// current->next = head;
		// head = current;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	close(fd);
	return (head);
}
/*
char *convert_to_words(char *number, t_dict_entry *dictionary)
{
    t_dict_entry *current = dictionary;
    while (current != NULL)
    {
        if (ft_strcmp(current->key, number) == 0)
        {
            return current->value;
        }
        current = current->next;
    }
	printf("Converted words: %s\n", current -> value);
    return current -> value;
}
*/
int	main(int argc, char **argv)
{
	if (argc > 3 || argc < 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		t_dict_entry *dict = parse_dictionary("numbers.dict");
		char *result = convert_to_words(argv[1], dict);
		if (result) {
			write(1, result, ft_strlen(result));
			write(1, "\n", 1);
		} else {
			write(1, "No match found\n", 15);
		}
	}
	if (argc == 3)
	{
		t_dict_entry *dict = parse_dictionary(argv[1]);
		char *result = convert_to_words(argv[2], dict);
		if (result) {
			write(1, result, ft_strlen(result));
			write(1, "\n", 1);
		} else {
			write(1, "No match found\n", 15);
		}
	}
}