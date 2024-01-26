/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:03:24 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/26 21:30:20 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*file;
	char	*input;
	char	**parsed_input;
	t_nbr	**parsed_dict;

	file = "numbers.dict";
	if (argc == 1 || argc > 3)
		return (0);
	if (argc == 3)
	{
		file = argv[1];
		input = argv[2];
	}
	else
		input = argv[1];
	if (is_valid_input(input))
		parsed_input = parse_input(input);
	else
		return (0);
	
	parsed_dict = parse_dict(file);
	
	if (parsed_dict == NULL)
		return (0);
	
	
	//display_number(parsed_input, parsed_dict);
	
	// below testing purposes
	int i = 0;
	while (parsed_dict[i])
	{
		printf("%s ", parsed_dict[i]->numeric);
		printf("%s\n", parsed_dict[i]->written);
		i++;
	}

	i = 0;
	while (parsed_input[i])
	{
		printf("%s\n", parsed_input[i]);
		i++;
	}
	
}
