/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:48:00 by cpopolan          #+#    #+#             */
/*   Updated: 2023/06/06 14:32:13 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"


t_stack	*ft_newnode(int n, t_stack *prev, int *size_a, int *size_b)
{
	t_stack		*node;
	static int	pos = 1;

	node = malloc(sizeof(t_stack) * 1);
	node->num = n;
	node->pos = pos;
	node->prev = prev;
	node->size_a = size_a;
	node->size_b = size_b;
	pos++;
	return (node);
}

t_stack	*ft_initialize(char **av, int *size_a, int *size_b)
{
	int		i;
	t_stack	*stack;
	t_stack	*node;

	node = ft_newnode(ft_atoi(av[0]), NULL, size_a, size_b);
	stack = node;
	i = 1;
	while (i < *size_a)
	{
		node->next = ft_newnode(ft_atoi(av[i]), node, size_a, size_b);
		node = node->next;
		i++;
	}
	node->next = stack;
	stack->prev = node;
	return (stack);
}
