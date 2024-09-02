/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:44:21 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/12 12:45:47 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "push_swap.h"
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct s_stack
{
	int				index;
	int				data;
	struct s_stack	*next;
}		t_stack;

void				arg_2(t_stack **a, char **str);
void				arg_1(t_stack **a, char **str);
int					is_sign_isolated(const char *str);
long				ft_atol(const char *str);
void				indexing(t_stack *a, int *tab, int size);
void				sort_tab(int *tab, int size);
int					*create_tab(t_stack *stack, int size);
void				ft_error(void);
int					checkdup(t_stack **a);
int					alpha_and_signal_check(char **argv);
void				sorting(t_stack **a, t_stack **b);
void				free_m(char **mat);
void				init(t_stack **a, t_stack **b);
void				radix_sort_stack(t_stack **a, t_stack **b);
void				indexing_stack(t_stack *a);
void				sort_any_value(t_stack **a, t_stack **b);
int					taking_paramers_2(t_stack **a, char **argus);
void				free_stack(t_stack **top);
int					taking_paramers(t_stack **a, char **argus);
void				sort_5_values(t_stack **a, t_stack **b);
void				push_to_b_if_5(t_stack **a, t_stack **b);
void				sort_3_values(t_stack **a);
int					min_p(t_stack **a);
int					max_p(t_stack **a);
int					ps_stack_check(t_stack **a);
int					stacklen(t_stack *top);
void				rotate(t_stack **top);
void				ra(t_stack **top_a);
void				rb(t_stack **top_a);
void				pa(t_stack **top_a, t_stack **top_b);
void				pb(t_stack **top_a, t_stack **top_b);
void				sa(t_stack **top_a);
void				sb(t_stack **top_b);
void				ss(t_stack **top_a, t_stack **top_b);
void				rr(t_stack **top_a, t_stack **top_b);
void				rra(t_stack **top_a);
void				rrb(t_stack **top_b);
void				rrr(t_stack **top_a, t_stack **top_b);
void				swap(t_stack **top);
void				push(t_stack **top, int data, int index);
t_stack				*pop(t_stack **top);

#endif
