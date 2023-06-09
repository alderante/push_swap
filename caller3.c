/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caller3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:16:39 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 10:15:06 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	caller_push_b(t_stack **stack_a, t_stack **stack_b)
{
	ft_push_b(stack_a, stack_b);
	ft_printf("pb\n");
}
