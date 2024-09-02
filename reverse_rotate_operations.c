/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:53:07 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/15 17:04:44 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **top_a)
{
	t_stack	*aux;
	t_stack	*tmp;

	if (*top_a && (*top_a)->next)
	{
		aux = *top_a;
		while (aux->next->next != NULL)
			aux = aux->next;
		tmp = aux->next;
		aux->next = NULL;
		tmp->next = *top_a;
		*top_a = tmp;
	}
	ft_printf("rra\n");
}

void	rrb(t_stack **top_b)
{
	t_stack	*aux;
	t_stack	*tmp;

	if (*top_b && (*top_b)->next)
	{
		aux = *top_b;
		while (aux->next->next != NULL)
			aux = aux->next;
		tmp = aux->next;
		aux->next = NULL;
		tmp->next = *top_b;
		*top_b = tmp;
	}
	ft_printf("rrb\n");
}

void	rrr(t_stack **top_a, t_stack **top_b)
{
	if (*top_a && *top_b)
	{
		rra(top_a);
		rrb(top_b);
	}
	else
		return ;
	ft_printf("rrr\n");
}
