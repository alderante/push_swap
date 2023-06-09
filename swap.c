/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:49:13 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/24 11:20:34 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

//Semplicemente, inverto il valore num del primo e del secondo nodo.
void	ft_swap(t_stack **stack)
{
	int	temp;

	temp = (*stack)->next->num;
	(*stack)->next->num = (*stack)->num;
	(*stack)->num = temp;
}
