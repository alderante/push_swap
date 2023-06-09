/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:21:38 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 10:38:59 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	lis_b(t_stack **stack_b, int b)
{
	if (b == 0)
		return ;
	else if (b > 0)
	{
		while (b > 0)
		{
			caller_rotate_b(stack_b, *(*stack_b)->size_b);
			b--;
		}
	}
	else if (b < 0)
	{
		while (b < 0)
		{
			caller_rev_rotate_b(stack_b, *(*stack_b)->size_b);
			b++;
		}
	}
}

void	lis_a(t_stack **stack_a, int a)
{
	if (a == 0)
		return ;
	else if (a > 0)
	{
		while (a > 0)
		{
			caller_rotate_a(stack_a, *(*stack_a)->size_a);
			a--;
		}
	}
	else if (a < 0)
	{
		while (a < 0)
		{
			caller_rev_rotate_a(stack_a, *(*stack_a)->size_a);
			a++;
		}
	}
}

void	chooser(t_stack **stack_a, t_stack **stack_b)
{
	int	*a;
	int	*b;
	int	best_pos;

	b = ft_optimal_b(stack_b);
	a = ft_optimal_a(stack_a, stack_b);
	best_pos = chooser_best_pos(stack_b, a, b);
	optimizer_chooser(a[best_pos], b[best_pos], stack_a, stack_b);
	caller_push_a(stack_a, stack_b);
	free(a);
	free(b);
}

void	liberator_stack(t_stack *stack_a)
{
	int		size;
	int		i;
	t_stack	*temp;

	size = *stack_a->size_a;
	temp = stack_a;
	if (size > 0)
	{
		temp = temp->next;
		i = 0;
		while (i < size)
		{
			free(stack_a);
			stack_a = temp;
			i++;
			if (i < size)
				temp = temp->next;
		}
	}
}

void	liberator_matrix(char **av)
{
	int	y;

	y = 0;
	if (av)
	{
		while (av[y])
		{
			free(av[y]);
			y++;
		}
		free(av);
	}
}
