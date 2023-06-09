/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 10:11:11 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 14:41:56 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_one(int one)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack) * 1);
	node->num = one;
	node->pos = 1;
	node->next = NULL;
	node->prev = NULL;
}
