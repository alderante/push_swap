/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:27:24 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 11:08:32 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_matrix_len(char **matrix)
{
	int	i;

	i = 0;
	if (matrix)
	{
		while (matrix[i])
			i++;
	}
	return (i);
}

int	infilabile(t_stack *stack_a, t_stack *stack_b)
{
	int		size;
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = stack_a;
	temp_b = stack_b;
	size = (*temp_a->size_a);
	while (size > 0)
	{
		if (stack_b->num > stack_a->num && stack_b->num < stack_a->next->num)
			return (1);
		stack_a = stack_a->next;
		size--;
	}
	return (0);
}

int	find_min_pos(t_stack **stack)
{
	int	min;
	int	min_pos;

	min = (*stack)->num;
	min_pos = (*stack)->pos;
	*stack = (*stack)->next;
	while ((*stack)->pos > (*stack)->prev->pos)
	{
		if ((*stack)->num < min)
		{	
			min = (*stack)->num;
			min_pos = (*stack)->pos;
		}
		*stack = (*stack)->next;
	}
	return (min_pos);
}

int	find_next_bigger(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		next_bigger_pos;

	next_bigger_pos = find_min_pos(&stack_a);
	i = *stack_a->size_a;
	while (i > 0)
	{
		if (stack_a->num > stack_b->num && stack_a->prev->num < stack_b->num)
			next_bigger_pos = stack_a->pos;
		stack_a = stack_a->next;
		i--;
	}
	return (next_bigger_pos);
}
