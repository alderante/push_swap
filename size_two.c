/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 10:39:19 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 16:17:23 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_two(int one, int two, int input_size)
{
	int		pos;
	t_stack	*node;
	t_stack	*first;

	node = malloc(sizeof(t_stack) * 1);
	first = node;
	pos = 1;
	node->num = one;
	node->pos = pos;
	printf("\n---------------------- nodo first is %d, position %d\n", node->num, node->pos);
	pos++;
	node->next = ft_newnode(two, pos, node);
	node = node->next;
	node->next = first;
	first->prev = node;
	
	ft_stamper(node, input_size);
	ft_rev_stamper(node, input_size);
	printf("\n---------------------- Size is %d\n", input_size);
	printf("---------------------- First value is %d, in position %d\n", first->num, first->pos);
	printf("---------------------- Node value is %d, in position %d \n\n", node->num, node->pos);
	
	if(node->num < first->num)
		//ft_rotate(&node, &first, input_size);
		ft_swap(&first);
	
	ft_stamper(node, input_size);
	ft_rev_stamper(node, input_size);
	printf("\n---------------------- Size is %d\n", input_size);
	printf("---------------------- First value is %d, in position %d\n", first->num, first->pos);
	printf("---------------------- Node value is %d, in position %d \n\n", node->num, node->pos);
	ft_final_stamper(first, input_size);

	free(node);
}