/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:17:40 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/15 15:46:21 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **top)
{
	t_stack	*aux;
	t_stack	*tmp;
	t_stack	*out;

	if (*top && (*top)->next)
	{
		out = *top;
		tmp = pop(&out);
		aux = out;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		tmp->next = NULL;
		aux->next = tmp;
		*top = out;
	}
	else
		return ;
}

void	ra(t_stack **top_a)
{
	if (*top_a)
		rotate(top_a);
	else
		return ;
	ft_printf("ra\n");
}

void	rb(t_stack **top_b)
{
	if (*top_b)
		rotate(top_b);
	else
		return ;
	ft_printf("rb\n");
}

void	rr(t_stack **top_a, t_stack **top_b)
{
	if (*top_a && *top_b)
	{
		ra(top_a);
		rb(top_b);
	}
	else
		return ;
	ft_printf("rr\n");
}
