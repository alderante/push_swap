/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:24:44 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 12:01:29 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	chooser_best_pos(t_stack **stack_b, int *a, int *b)
{
	int	i;
	int	res;
	int	best;
	int	best_pos;

	i = 0;
	while (i < (*(*stack_b)->size_b))
	{
		res = chooser_res(a[i], b[i]);
		if (i == 0)
		{
			best = res;
			best_pos = i;
			if ((*(*stack_b)->size_b) == 0)
				break ;
		}
		if ((res < best) && i > 0)
		{	
			best = res;
			best_pos = i;
		}
		i++;
	}
	return (best_pos);
}

int	chooser_res(int a, int b)
{
	int	res;

	res = 0;
	if (a >= 0 && b >= 0)
		res = biggest(a, b);
	else if (a >= 0 && b < 0)
		res = (a + (b * -1));
	else if (a < 0 && b >= 0)
		res = ((a * -1) + b);
	else if (a < 0 && b < 0)
		res = smallest((a), (b)) * -1;
	return (res);
}

void	optimizer_chooser(int a, int b, t_stack **stack_a, t_stack **stack_b)
{
	if (b > 0 && a > 0)
	{
		while ((b > 0 && a > 0))
		{
			caller_rotate_ab(stack_a, stack_b, *(*stack_a)->size_a, \
						*(*stack_b)->size_b);
			b--;
			a--;
		}
	}
	else if (b < 0 && a < 0)
	{
		while ((b < 0 && a < 0))
		{
			caller_rev_rotate_ab(stack_a, stack_b, *(*stack_a)->size_a, \
						*(*stack_b)->size_b);
			b++;
			a++;
		}
	}
	lis_b(stack_b, b);
	lis_a(stack_a, a);
}
