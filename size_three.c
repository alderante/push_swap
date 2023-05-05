/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:54:18 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:49 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_three(char **av, int input_size)
{
	t_stack	*first;
	t_stack	*second;
	
	first = ft_initialize(av, input_size);
	second = NULL;

	ft_push(&first, &second);
}