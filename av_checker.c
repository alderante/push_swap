/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   av_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:41:12 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 18:01:16 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int double_checker(char **av, int size)
{
	int i;
	int j;	
	
	i = 0;
	while(av[i])
	{
		j = i + 1;
		while (j < size)
		{
			if(atoi(av[i]) == atoi(av[j]))
				return (3);
			j++;
		}
		i++;
	}
	return (0);
}

int digit_sign_checker(char *av)
{
	int	j;
	
	j = 0;
	if(!av[j])
		return(4);
	if(av[j] == '-' || av[j] == '+')
	{
		if(!(av[j + 1] >= '0' && av[j + 1] <= '9'))
			return(4);
		j++;
	}
	while(av[j])
	{
		if(!(av[j] >= '0' && av[j] <= '9'))
			return (4);
		j++;
	}
	return(0);
}

long int how_big_is_your_love(char *str)
{
	int i;
	int n;
	int j;
	long int res;
	
	i = 0;
	res = 0;
	n = 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
		n = -1;
	if(str[i] == '+' || str[i] == '-')
		i++;
	j = 0;
	while(str[i] >= '0' && str[i] <= '9' && j < 11)
	{
		res *= 10;
		res = res + str[i] - '0';
		i++;
		j++;
	}
	if(res >= INT_MAX || res <= INT_MIN)
		return (5);
	return (0);
}

void av_checker(char **av, int size)
{
	int i;
	
	if(double_checker(av, size) == 3)
		exit (printf("Ci sono numeri doppi") * 0 + 1);
	i = 0;
	while(av[i])
	{
		if(digit_sign_checker(av[i]) == 4)
			exit (printf("O virgolette vuote, o ci sono lettere, o troppi segni, o punteggiature, o fai schifo nella vita") * 0 + 1);
		if(how_big_is_your_love(av[i]) == 5)
			exit (printf("Heart too big") * 0 + 1);
	i++;
	}
}