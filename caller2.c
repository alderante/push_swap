/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caller2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:15:35 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 10:14:40 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	caller_rev_rotate_b(t_stack **stack, int input_size)
{
	ft_rev_rotate(stack, input_size);
	ft_printf("rrb\n");
}

void	caller_rev_rotate_ab(t_stack **stack_a, t_stack **stack_b, \
		int size_a, int size_b)
{
	ft_rev_rotate(stack_a, size_a);
	ft_rev_rotate(stack_b, size_b);
	ft_printf("rrr\n");
}

void	caller_swap_a(t_stack **stack)
{
	ft_swap(stack);
	ft_printf("sa\n");
}

void	caller_swap_b(t_stack **stack)
{
	ft_swap(stack);
	ft_printf("sb\n");
}

void	caller_push_a(t_stack **stack_a, t_stack **stack_b)
{
	ft_push_a(stack_a, stack_b);
	ft_printf("pa\n");
}
