/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:49:13 by cpopolan          #+#    #+#             */
/*   Updated: 2023/04/28 11:09:02 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

//Semplicemente, inverto il valore num del primo e del secondo nodo.
void ft_swap(t_stack **first)
{
	int	temp;

	temp = (*first)->next->num;
	(*first)->next->num = (*first)->num;
	(*first)->num = temp;
	printf("\n\n🔀Swapped🔀\n\n");
}