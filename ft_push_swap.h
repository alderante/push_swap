/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:46:50 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 11:19:51 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				num;
	int				pos;
	int				*size_a;
	int				*size_b;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

int		av_checker(char **av, int input_size);
void	ft_stamper(t_stack *node, int size);
void	ft_rev_stamper(t_stack *node, int size);
void	ft_final_stamper(t_stack *node, int size);
void	ft_size_one(int one);
void	ft_size_two(t_stack **stack);
void	ft_size_three(t_stack **stack, int input_size);
void	ft_size_four(t_stack **stack_a, t_stack **stack_b);
void	ft_size_five(t_stack **stack_a, t_stack **stack_b);
void	ft_size_over(t_stack **stack_a, t_stack **stack_b, int input_size);
void	ft_size_over_init(t_stack **stack_a, t_stack **stack_b, int input_size);

void	ft_rotate(t_stack **stack, int input_size);
void	ft_rev_rotate(t_stack **stack, int input_size);
void	ft_swap(t_stack **stack);
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_push_a_positioner(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b_positioner(t_stack **stack_a, t_stack **stack_b);

void	caller_rotate_a(t_stack **stack, int input_size);
void	caller_rotate_b(t_stack **stack, int input_size);
void	caller_rotate_ab(t_stack **stack_a, t_stack **stack_b, \
	int size_a, int size_b);
void	caller_rev_rotate_a(t_stack **stack, int input_size);
void	caller_rev_rotate_b(t_stack **stack, int input_size);
void	caller_rev_rotate_ab(t_stack **stack_a, t_stack **stack_b, \
	int size_a, int size_b);
void	caller_swap_a(t_stack **stack);
void	caller_swap_b(t_stack **stack);
void	caller_swap_ab(t_stack **stack_a, t_stack **stack_b);
void	caller_push_a(t_stack **stack_a, t_stack **stack_b);
void	caller_push_b(t_stack **stack_a, t_stack **stack_b);

int		ft_matrix_len(char **matrix);
int		infilabile(t_stack *stack_a, t_stack *stack_b);
void	chooser(t_stack **stack_a, t_stack **stack_b);
void	lis_a(t_stack **stack_a, int a);
void	lis_b(t_stack **stack_b, int b);

//int		find_min(t_stack *stack);
//int		find_max(t_stack *stack);
int		biggest(int a, int b);
int		smallest(int a, int b);
int		find_min_pos(t_stack **stack);
int		*ft_optimal_b(t_stack **stack_b);
int		*ft_optimal_a(t_stack **stack_a, t_stack **stack_b);
int		find_next_bigger(t_stack *stack_a, t_stack *stack_b);
int		cleaner_a(int c, int size_a);
void	liberator_matrix(char **av);
void	liberator_stack(t_stack *stack_a);
int		chooser_res(int a, int b);
void	optimizer_chooser(int a, int b, t_stack **stack_a, t_stack **stack_b);
int		chooser_best_pos(t_stack **stack_b, int *a, int *b);

t_stack	*ft_newnode(int n, t_stack *prev, int *size_a, int *size_b);
t_stack	*ft_initialize(char **av, int *size_a, int *size_b);

#endif
