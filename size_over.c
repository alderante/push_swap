/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_over.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:43:26 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 11:07:18 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_over_init(t_stack **stack_a, t_stack **stack_b, int input_size)
{
	int	i;
	int	a;

	i = *(*stack_a)->size_a;
	a = input_size / 3;
	while (i > 0)
	{
		if ((*stack_a)->num > (a * 2))
			caller_push_b(stack_a, stack_b);
		else if ((*stack_a)->num <= (a * 2))
			caller_rotate_a(stack_a, *(*stack_a)->size_a);
		i--;
	}
	i = *(*stack_a)->size_a;
	while (i > 0)
	{
		if ((*stack_a)->num >= a && (*stack_a)->num <= (a * 2))
			caller_push_b(stack_a, stack_b);
		else
			caller_rotate_a(stack_a, *(*stack_a)->size_a);
		i--;
	}
}

void	ft_size_over(t_stack **stack_a, t_stack **stack_b, int input_size)
{
	int	i;
	int	a;

	i = *(*stack_a)->size_a;
	a = input_size / 3;
	ft_size_over_init(stack_a, stack_b, input_size);
	i = *(*stack_a)->size_a;
	while (i > 2)
	{
		if ((*stack_a)->num < a)
			caller_push_b(stack_a, stack_b);
		else if ((*stack_a)->num >= a)
			caller_rotate_a(stack_a, *(*stack_a)->size_a);
		i--;
	}
	i = *(*stack_b)->size_b;
	while (i > 0)
	{
		chooser(stack_a, stack_b);
		i--;
	}
	while ((*stack_a)->num > (*stack_a)->prev->num)
		caller_rev_rotate_a(stack_a, *(*stack_a)->size_a);
}
