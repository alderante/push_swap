/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:29:36 by cpopolan          #+#    #+#             */
/*   Updated: 2023/04/28 15:02:00 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_push(t_stack **first, t_stack **second)
{
	t_stack	*temp;

	if(*second == NULL)
		exit(1);
		
	printf("first num is %d\n", (*first)->num);
	printf("first num is %d\n", (*second)->num);
	

	temp = *first;
	*first = *second;
	*second = (*second)->next;
	(*first)->next = temp;
	
	//(*node)->next = *first;
	
	printf("\n\n⏩Pushed⏩\n\n");
}