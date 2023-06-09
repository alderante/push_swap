/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 10:39:19 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/24 11:20:21 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_two(t_stack **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		caller_swap_a(stack);
}
