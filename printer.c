/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:07:02 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 11:04:05 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_stamper(t_stack *stack, int size)
{
	int	i;

	i = 0;
	ft_printf("\n|--------------------- nodi nexter\n");
	while (i < size)
	{
		stack = stack->next;
		i++;
	}
}

void	ft_rev_stamper(t_stack *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack = stack->prev;
		i++;
	}
}

void	ft_final_stamper(t_stack *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!stack->next)
			break ;
		stack = stack->next;
		i++;
	}
}
