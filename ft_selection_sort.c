/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:07:27 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/19 12:10:08 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sign_isolated(const char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (i == 0 || !ft_isalnum(str[i - 1]))
			{
				if (str[i + 1] == '\0' || !ft_isalnum(str[i + 1]))
					return (-1);
			}
		}
		if (str[i] == '0' && i > 0 && (str[i - 1] == '-' || str[i - 1] == '+'))
			return (-1);
		if (str[0] && (str[1] == '-' || str[1] == '+'))
			return (-1);
		if (str[i] == '=')
			return (-1);
		if ((str[i] == '-' || str[i] == '+')
			&& (i > 0 && ft_isalnum(str[i - 1])
				&& str[i + 1] != '\0' && ft_isalnum(str[i + 1])))
			return (-1);
	}
	return (42);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sinal;

	result = 0;
	sinal = 1;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sinal = -1;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result > (LONG_MAX - (*str - '0')) / 10)
			return ((sinal == 1) * LONG_MAX + (sinal != 1) * LONG_MIN);
		result = (result * 10) + (*str - '0');
		str ++;
	}
	return (result * sinal);
}

t_stack	*pop(t_stack **top)
{
	t_stack	*tmp;

	if (*top)
	{		
		tmp = *top;
		*top = (*top)->next;
	}
	return (tmp);
}

void	if_its_not_less_grownd(t_stack **a, t_stack **b)
{
	if (min_p(a) != 1 && min_p(a) <= (stacklen(*a) / 2))
	{
		while (min_p(a) != 1)
			ra(a);
		pb(a, b);
	}
	else if (min_p(a) != 1 && min_p(a) >= (stacklen(*a) / 2))
	{
		while (min_p(a) != 1)
			rra(a);
		pb(a, b);
	}
	else if (min_p(a) == 1)
		pb(a, b);
}

void	sort_any_value(t_stack **a, t_stack **b)
{
	if (!ps_stack_check(a))
	{
		while (stacklen(*a) != 3)
			if_its_not_less_grownd(a, b);
		sort_3_values(a);
		while (*b)
			pa(a, b);
	}
}
