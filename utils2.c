/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:26:43 by cpopolan          #+#    #+#             */
/*   Updated: 2023/06/06 12:13:43 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	biggest(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	smallest(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	*ft_optimal_b(t_stack **stack_b)
{
	int		i;
	int		half;
	int		*optimal_b;
	t_stack	*temp_b;

	optimal_b = malloc(sizeof(int) * (*(*stack_b)->size_b));
	i = 0;
	temp_b = *stack_b;
	if ((*(*stack_b)->size_b) == 1)
	{
		optimal_b[0] = 0;
		return (optimal_b);
	}
	half = (*(*stack_b)->size_b) / 2;
	while (i < *temp_b->size_b)
	{
		if (i < half)
			optimal_b[i] = temp_b->pos - 1;
		else if (i >= half)
			optimal_b[i] = (temp_b->	 - *temp_b->size_b) - 1;
		temp_b = temp_b->next;
		i++;
	}
	return (optimal_b);
}

int	cleaner_a(int c, int size_a)
{
	int	half;

	half = (size_a / 2);
	if (c == 0)
		return (0);
	else if (c <= half)
		c = c - 1;
	else if (c > half)
		c = (c - size_a) - 1;
	return (c);
}

int	*ft_optimal_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		*optimal_a;
	t_stack	*temp_a;
	t_stack	*temp_b;

	optimal_a = malloc(sizeof(int) * (*(*stack_b)->size_b));
	i = 0;
	temp_a = *stack_a;
	temp_b = *stack_b;
	while (i < *temp_b->size_b)
	{
		optimal_a[i] = cleaner_a(find_next_bigger(temp_a, temp_b), \
					*temp_a->size_a);
		temp_b = temp_b->next;
		i++;
	}
	i = 0;
	return (optimal_a);
}
