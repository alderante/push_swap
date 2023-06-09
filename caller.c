/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caller.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:44:51 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 10:14:24 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	caller_rotate_a(t_stack **stack, int input_size)
{
	ft_rotate(stack, input_size);
	ft_printf("ra\n");
}

void	caller_rotate_b(t_stack **stack, int input_size)
{
	ft_rotate(stack, input_size);
	ft_printf("rb\n");
}

void	caller_rotate_ab(t_stack **stack_a, t_stack **stack_b, \
		int size_a, int size_b)
{
	ft_rotate(stack_a, size_a);
	ft_rotate(stack_b, size_b);
	ft_printf("rr\n");
}

void	caller_rev_rotate_a(t_stack **stack, int input_size)
{
	ft_rev_rotate(stack, input_size);
	ft_printf("rra\n");
}
