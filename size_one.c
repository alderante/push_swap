/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 10:11:11 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 15:48:59 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_one(int one, int input_size)
{
	t_stack	*node;
		
	node = malloc(sizeof(t_stack) * 1);
	node->num = one;
	node->pos = 1;
	node->next = NULL;
	node->prev = NULL;

	printf("\n---------------------- nodo partenza is %d, position %d\n", node->num, node->pos);
	printf("\n---------------------- Size is %d\n\n", input_size);
	ft_final_stamper(node, input_size);
	free(node);
}