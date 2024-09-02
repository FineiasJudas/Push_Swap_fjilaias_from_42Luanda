/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:54:37 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/26 09:00:53 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_tab(t_stack *stack, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (stack)
	{
		tab[i] = stack->data;
		stack = stack->next;
		i++;
	}
	return (tab);
}

void	sort_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i ++;
	}
}

void	indexing(t_stack *a, int *tab, int size)
{
	int	i;

	while (a)
	{
		i = 0;
		while (i < size)
		{
			if (a->data == tab[i])
			{
				a->index = i;
				break ;
			}
			i ++;
		}
		a = a->next;
	}
}

static int	binary_digits_counter(t_stack *a)
{
	int	bits;
	int	max_index;

	max_index = 0;
	bits = 0;
	while (a)
	{
		if (a->index > max_index)
			max_index = a->index;
		a = a->next;
	}
	while (max_index >> bits)
		bits ++;
	return (bits);
}

void	radix_sort_stack(t_stack **a, t_stack **b)
{
	int	digits;
	int	i;
	int	j;
	int	size;

	digits = binary_digits_counter(*a);
	i = 0;
	size = stacklen(*a);
	while (i < digits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j ++;
		}
		while (*b)
			pa(a, b);
		i ++;
	}
}
