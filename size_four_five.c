/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_four_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:58:20 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 11:06:18 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_four(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;

	pos = find_min_pos(stack_a);
	while (pos > 1)
	{
		caller_rotate_a(stack_a, *(*stack_a)->size_a);
		pos--;
	}
	caller_push_b(stack_a, stack_b);
	ft_size_three(stack_a, *(*stack_a)->size_a);
	caller_push_a(stack_a, stack_b);
}

void	ft_size_five(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;

	pos = find_min_pos(stack_a);
	if (pos == 5)
	{
		caller_rev_rotate_a(stack_a, *(*stack_a)->size_a);
		pos = 0;
	}
	while (pos > 1)
	{
		caller_rotate_a(stack_a, *(*stack_a)->size_a);
		pos--;
	}
	caller_push_b(stack_a, stack_b);
	pos = find_min_pos(stack_a);
	while (pos > 1)
	{
		caller_rotate_a(stack_a, *(*stack_a)->size_a);
		pos--;
	}
	caller_push_b(stack_a, stack_b);
	ft_size_three(stack_a, *(*stack_a)->size_a);
	caller_push_a(stack_a, stack_b);
	caller_push_a(stack_a, stack_b);
}
