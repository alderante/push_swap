/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:27:24 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 16:04:50 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

char	**ft_split(char *str)
{
	int i;
	int y;
	int x;
	char **tab;

	i = 0;
	y = 0;
	tab = malloc(sizeof(char*) * 1024);
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			x = 0;
			tab[y] = malloc(sizeof(char) * 1024);
			while (str[i] > 32)
			{
				tab[y][x] = str[i];
				i++;
				x++;
			}
			tab[y][x] = '\0';
			y++;
		}
		else
			i++;
	}
	tab[y] = 0;
	return (tab);
}

int	ft_matrix_len(char **matrix)
{
	int i;
	
	i = 0;
	if (matrix)
	{
		while (matrix[i])
			i++;
	}
	return (i);
}
