/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:43:42 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/19 16:24:41 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_p(t_stack **a)
{
	int		i;
	int		min_pos;
	int		min_value;
	t_stack	*tmp;

	if (!*a)
		return (0);
	i = 1;
	min_pos = 1;
	tmp = *a;
	min_value = tmp->data;
	while (tmp)
	{
		if (tmp->data < min_value)
		{
			min_value = tmp->data;
			min_pos = i;
		}
		i ++;
		tmp = tmp->next;
	}
	return (min_pos);
}

int	max_p(t_stack **a)
{
	int		i;
	int		max_pos;
	int		max_value;
	t_stack	*tmp;

	if (!*a)
		return (0);
	i = 1;
	max_pos = 1;
	tmp = *a;
	max_value = tmp->data;
	while (tmp)
	{
		if (tmp->data > max_value)
		{
			max_value = tmp->data;
			max_pos = i;
		}
		i ++;
		tmp = tmp->next;
	}
	return (max_pos);
}

void	sort_3_values(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if (stacklen(tmp) == 3)
	{
		if (max_p(a) == 1)
		{
			ra(a);
			if (min_p(a) != 1)
				sa(a);
		}
		else if (max_p(a) == 2)
		{
			rra(a);
			if (min_p(a) != 1)
				sa(a);
		}
		else if (max_p(a) == 3)
		{
			if (min_p(a) != 1)
				sa(a);
		}
	}
}

void	push_to_b_if_5(t_stack **a, t_stack **b)
{
	int	min_v;

	min_v = min_p(a);
	if (min_v == 1)
		pb(a, b);
	else if (min_v < 3)
		sa(a);
	else if (min_v == 3)
		ra(a);
	else if (min_v > 3)
		rra(a);
	else if (min_v == 5)
		rra(a);
}

void	sort_5_values(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	if ((stacklen(tmp) == 5) && !(ps_stack_check(a)))
	{
		while (stacklen(*b) != 2)
			push_to_b_if_5(a, b);
		sort_3_values(a);
		if (max_p(b) != 1)
			sb(b);
		pa(a, b);
		pa(a, b);
	}
	else if (stacklen(tmp) == 3)
		sort_3_values(a);
}
