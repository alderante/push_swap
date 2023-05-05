/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:02:39 by cpopolan          #+#    #+#             */
/*   Updated: 2023/04/28 14:27:06 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

//Il puntatore first passa a puntare quello che per ora is il secondo nodo.
//Fare aumentare di uno la posizione di ogni nodo che non sia il primo, che invece assume la posizione del secondo. 
void ft_rotate(t_stack **node, t_stack **first, int input_size)
{
	int	i;
	t_stack	*temp;

	temp = *first;
	*first = *node;
	*node = temp;
	(*first)->pos = (*node)->pos;
	(*node) = (*first)->next;
	(*node)->pos = (*first)->pos + 1;
	
	i = 2;
	while(i < input_size)
	{
		(*node) = (*node)->next;
		(*node)->pos += 1;
		i++;
	}
	(*node)->pos = input_size;
	printf("\n\n🔃Rotate🔃\n\n");

}