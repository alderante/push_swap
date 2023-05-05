/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:07:02 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 16:17:37 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_stamper(t_stack *node, int size)
{
	int i;
	
	i = 0;
	printf("\n|--------------------- nodi nexter\n");
	while(i < size)
	{
		node = node->next;
		printf("|--------------------↓ nexter %d, position %d\n", node->num, node->pos);
		i++;
	}
}

void	ft_rev_stamper(t_stack *node, int size)
{
	int i;
	
	i = 0;
	printf("\n|--------------------- nodi previouser\n");
	while(i < size)
	{
		node = node->prev;
		printf("|--------------------↑ previouser %d, position %d\n", node->num, node->pos);
		i++;
	}
}

void	ft_final_stamper(t_stack *node, int size)
{
	int i;
	
	i = 0;
	while(i < size)
	{
		printf("%d, %d\n", node->num, node->pos);
		node = node->next;
		i++;
	}
}