/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:13:20 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/14 14:20:19 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **top)
{
	int	tmp;

	if (*top)
	{
		tmp = (*top)->data;
		(*top)->data = (*top)->next->data;
		(*top)->next->data = tmp;
	}
	else
		return ;
}

void	sa(t_stack **top_a)
{
	if (*top_a && (stacklen(*top_a) > 1))
		swap(top_a);
	else
		return ;
	ft_printf("sa\n");
}

void	sb(t_stack **top_b)
{
	if (*top_b && (stacklen(*top_b) > 1))
		swap(top_b);
	else
		return ;
	ft_printf("sb\n");
}

void	ss(t_stack **top_a, t_stack **top_b)
{
	if ((*top_a && stacklen(*top_a) > 1)
		&& (*top_b && stacklen(*top_b) > 1))
	{
		swap(top_a);
		swap(top_b);
	}
	else
		return ;
	ft_printf("ss\n");
}
