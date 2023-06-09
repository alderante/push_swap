/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:54:18 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 10:37:40 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_three(t_stack **stack, int input_size)
{
	if ((*stack)->num < (*stack)->next->num \
	&& (*stack)->next->num > (*stack)->next->next->num \
	&& (*stack)->next->next->num > (*stack)->num)
	{	
		caller_swap_a(stack);
		caller_rotate_a(stack, input_size);
	}
	else if ((*stack)->num < (*stack)->next->num && (*stack)->next->num > \
	(*stack)->next->next->num \
	&& (*stack)->next->next->num < (*stack)->num)
		caller_rev_rotate_a(stack, input_size);
	else if ((*stack)->num > (*stack)->next->num && (*stack)->next->num < \
	(*stack)->next->next->num && (*stack)->next->next->num < (*stack)->num)
		caller_rotate_a(stack, input_size);
	else if ((*stack)->num > (*stack)->next->num && (*stack)->next->num > \
	(*stack)->next->next->num && (*stack)->next->next->num < (*stack)->num)
	{	
		caller_swap_a(stack);
		caller_rev_rotate_a(stack, input_size);
	}
	else if ((*stack)->num > (*stack)->next->num && (*stack)->next->num < \
	(*stack)->next->next->num && (*stack)->next->next->num > (*stack)->num)
		caller_swap_a(stack);
}
