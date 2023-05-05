/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:46:50 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:31 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct	s_stack 
{
	int		num;
	int		pos;
	struct s_stack	*prev;
	struct s_stack	*next;
} t_stack;

void 	av_checker(char **av, int size);
void	ft_stamper(t_stack *node, int size);
void	ft_rev_stamper(t_stack *node, int size);
void	ft_final_stamper(t_stack *node, int size);
void	ft_size_one(int one, int input_size);
void	ft_size_two(int one, int two, int input_size);
void	ft_size_three(char **av, int input_size);
void 	ft_rotate(t_stack **node, t_stack **first, int input_size);
void 	ft_swap(t_stack **first);
void	ft_push(t_stack **first, t_stack **second);
char	**ft_split(char *str);
int		ft_matrix_len (char **matrix);

t_stack	*ft_newnode(int	n, int pos, t_stack *prev);
t_stack	*ft_initialize(char **av, int input_size);

#endif
