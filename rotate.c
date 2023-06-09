/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:02:39 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 11:08:51 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rev_rotate(t_stack **stack, int input_size)
{
	int	i;

	(*stack)->pos += 1;
	i = 2;
	while (i < input_size)
	{
		(*stack) = (*stack)->next;
		(*stack)->pos += 1;
		i++;
	}
	*stack = (*stack)->next;
	(*stack)->pos = 1;
}

void	ft_rotate(t_stack **stack, int input_size)
{
	int	i;

	(*stack)->pos = input_size;
	i = 2;
	while (i < input_size)
	{
		(*stack) = (*stack)->prev;
		(*stack)->pos -= 1;
		i++;
	}
	*stack = (*stack)->prev;
	(*stack)->pos = 1;
}
