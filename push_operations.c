/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:13:02 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/12 18:16:23 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **top_a, int data, int index)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->data = data;
	new->index = index;
	new->next = *top_a;
	*top_a = new;
}

void	pa(t_stack **top_a, t_stack **top_b)
{
	t_stack	*tmp;

	if (*top_b)
	{	
		tmp = *top_b;
		*top_b = (*top_b)->next;
		push(top_a, tmp->data, tmp->index);
		free(tmp);
	}
	else
		return ;
	ft_printf("pa\n");
}

void	pb(t_stack **top_a, t_stack **top_b)
{
	t_stack	*tmp;

	if (*top_a)
	{
		tmp = *top_a;
		*top_a = (*top_a)->next;
		push(top_b, tmp->data, tmp->index);
		free(tmp);
	}
	else
		return ;
	ft_printf("pb\n");
}
