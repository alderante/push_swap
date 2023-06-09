/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:29:36 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 11:07:02 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_a_positioner(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	*(*stack_b)->size_b -= 1;
	*(*stack_a)->size_a += 1;
	(*stack_a)->pos = 0;
	i = 0;
	while (i < *(*stack_b)->size_b)
	{
		if (!(*stack_b)->next)
			break ;
		(*stack_b) = (*stack_b)->next;
		(*stack_b)->pos -= 1;
		i++;
	}
	i = 0;
	while (i < *(*stack_a)->size_a)
	{
		if (!(*stack_a)->next)
			break ;
		(*stack_a) = (*stack_a)->next;
		(*stack_a)->pos += 1;
		i++;
	}
}

void	ft_push_b_positioner(t_stack **stack_a, t_stack **stack_b)
{	
	int	i;

	*(*stack_a)->size_a -= 1;
	*(*stack_b)->size_b += 1;
	(*stack_b)->pos = 0;
	i = 0;
	while (i < *(*stack_a)->size_a)
	{
		if (!(*stack_a)->next)
			break ;
		(*stack_a) = (*stack_a)->next;
		(*stack_a)->pos -= 1;
		i++;
	}
	i = 0;
	while (i < *(*stack_b)->size_b)
	{
		if (!(*stack_b)->next)
			break ;
		(*stack_b) = (*stack_b)->next;
		(*stack_b)->pos += 1;
		i++;
	}
}

void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_b)
	{
		temp = *stack_b;
		*stack_b = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_a)->prev = (*stack_b)->prev;
		(*stack_a)->prev->next = *stack_a;
		(*stack_b)->prev = temp->prev;
		(*stack_b)->next = temp;
		temp->prev = *stack_b;
		(*stack_b)->prev->next = *stack_b;
	}
	if (*stack_b == NULL)
	{
		*stack_b = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_a)->prev = (*stack_b)->prev;
		(*stack_b)->prev->next = (*stack_b)->next;
		(*stack_b)->prev = *stack_b;
		(*stack_b)->next = *stack_b;
	}
	ft_push_b_positioner(stack_a, stack_b);
}

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_a)
	{
		temp = *stack_a;
		*stack_a = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_b)->prev = (*stack_a)->prev;
		(*stack_b)->prev->next = *stack_b;
		(*stack_a)->prev = temp->prev;
		(*stack_a)->next = temp;
		temp->prev = *stack_a;
		(*stack_a)->prev->next = *stack_a;
	}
	if (*stack_a == NULL)
	{
		*stack_a = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_b)->prev = (*stack_a)->prev;
		(*stack_a)->prev->next = (*stack_a)->next;
		(*stack_a)->prev = *stack_a;
		(*stack_a)->next = *stack_a;
	}
	ft_push_a_positioner(stack_a, stack_b);
}
