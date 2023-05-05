/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:48:00 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 16:17:08 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_stack	*ft_newnode(int	n, int pos, t_stack *prev)
{
	t_stack	*node;
	
	node = malloc(sizeof(t_stack) * 1);
	node->num = n;
	node->pos = pos;
	printf("---------------------- nodo creato is %d, position %d\n", node->num, node->pos);
	node->prev = prev;
	
	return (node);
}

// Qui inizializzo nel primo if il primo nodo e poi nello while passo a ft_newnode via via gli ulteriori argomenti per la creazione dei nodi successivi
t_stack	*ft_initialize(char **av, int input_size)
{
	int		i;
	t_stack	*first;
	t_stack	*node;

	i = 0;
	if(i == 0)
	{
		node = malloc(sizeof(t_stack) * 1);
		first = node;
		node->num = atoi(av[0]);
		node->pos = i + 1;
		printf("\n---------------------- nodo first is %d, position %d\n", node->num, node->pos);
	}
	i++;
	while(i < input_size)
	{
		node->next = ft_newnode(atoi(av[i]), i + 1, node);
		node = node->next;
		i++;
	}

	node->next = first;
	first->prev = node;

	ft_stamper(node, input_size);
	ft_rev_stamper(node, input_size);
	printf("\n---------------------- Size is %d\n", input_size);
	printf("---------------------- First value is %d, in position %d\n", first->num, first->pos);
	printf("---------------------- Node value is %d, in position %d \n\n", node->num, node->pos);

	if(node->num < node->prev->num)
		//ft_rotate(&node, &first, input_size);
		ft_swap(&first);

	ft_stamper(node, input_size);
	ft_rev_stamper(node, input_size);
	printf("\n---------------------- Size is %d\n", input_size);
	printf("---------------------- First value is %d, in position %d\n", first->num, first->pos);
	printf("---------------------- Node value is %d, in position %d \n\n", node->num, node->pos);
	ft_final_stamper(first, input_size);
	free(node);
	return(first);
}