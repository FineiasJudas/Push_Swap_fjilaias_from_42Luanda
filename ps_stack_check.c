/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:11:57 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/19 13:49:38 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_stack_check(t_stack **a)
{
	t_stack	*tmp;

	if (*a == NULL || (*a)->next == NULL)
		return (0);
	tmp = *a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (42);
}

int	stacklen(t_stack *top)
{
	int		i;
	t_stack	*aux;

	i = 0;
	aux = top;
	while (aux != NULL)
	{
		i ++;
		aux = aux->next;
	}
	return (i);
}

void	sorting(t_stack **a, t_stack **b)
{
	indexing_stack(*a);
	if (!ps_stack_check(a))
	{
		if (stacklen(*a) == 3 || stacklen(*a) == 5)
			sort_5_values(a, b);
		else if (stacklen(*a) == 2)
		{
			if (!ps_stack_check(a))
				sa(a);
		}
		else if (stacklen(*a) == 4)
			sort_any_value(a, b);
		else if (stacklen(*a) > 5)
			radix_sort_stack(a, b);
		else
			return ;
	}
}

int	alpha_and_signal_check(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j]) != '\0')
		{
			if (ft_isalpha(argv[i][j]))
				return (-1);
			if ((argv[i][j] == '-' && argv[i][j + 1] == '-')
				|| (argv[i][j] == '+' && argv[i][j + 1] == '+'))
				return (-1);
			if (ft_isdigit(argv[i][j])
				&& (argv[i][j + 1] == '-' || argv[i][j + 1] == '+'))
				return (-1);
			j++;
		}
		i++;
	}
	return (42);
}

int	checkdup(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp_2;

	tmp_2 = *a;
	while (tmp_2)
	{
		tmp = tmp_2->next;
		while (tmp)
		{
			if (tmp_2->data == tmp->data)
				return (-1);
			tmp = tmp->next;
		}
		tmp_2 = tmp_2->next;
	}
	return (42);
}
