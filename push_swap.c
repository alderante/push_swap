/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:38:00 by cpopolan          #+#    #+#             */
/*   Updated: 2023/06/05 16:33:35 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_swap(char **av, int input_size)
{
	t_stack	*a;
	t_stack	*b;
	int		size_a;
	int		size_b;

	if (av_checker(av, input_size) != 0)
		return ;
	size_a = input_size;
	size_b = 0;
	a = ft_initialize(av, &size_a, &size_b);
	b = NULL;
	if (input_size == 2)
		ft_size_two(&a);
	else if (input_size == 3)
		ft_size_three(&a, input_size);
	else if (input_size == 4)
		ft_size_four(&a, &b);
	else if (input_size == 5)
		ft_size_five(&a, &b);
	else if (input_size > 5)
		ft_size_over(&a, &b, input_size);
	liberator_stack(a);
}

int	main(int ac, char **av)
{
	int	input_size;

	if (ac < 2)
		exit (write(2, "Error\n", 6) * 0 + 1);
	else if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		input_size = ft_matrix_len(av);
		if (*av)
			ft_push_swap(av, input_size);
		liberator_matrix(av);
	}
	else if (ac > 2)
	{
		input_size = ac - 1;
		ft_push_swap(av + 1, input_size);
	}
	return (0);
}
