/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:38:00 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 17:59:32 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_swap(char **av, int size)
{
	t_stack *a;
	t_stack *b;

	a = ft_initialize(av, size);
	b = NULL;

	if(size == 1)
		ft_size_one(atoi(av[0]), size);
	else if(size == 2)
		ft_size_two(atoi(av[0]), atoi(av[1]), size);
	else if(size == 3)
		ft_size_three(av, size);
	else if(size > 4)
		ft_size_three(av, size);
}

int	main(int ac, char **av)
{
	int	size;
		
	if(ac < 2)
		printf("No valid arguments");
	else if (ac == 2)
	{
		av = ft_split(av[1]);
		size = ft_matrix_len(av);
		if(*av)
		{
			av_checker(av, size);
			ft_push_swap(av, size);
			//qui i'll have to free av!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		}
	}
	else if(ac > 2)
	{
		size = ac - 1;
		av_checker(av + 1, size);
		ft_push_swap(av + 1, size);
	}
	return (0);
}