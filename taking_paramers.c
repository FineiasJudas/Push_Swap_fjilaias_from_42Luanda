/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   taking_paramers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:38:11 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/20 16:53:50 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **top)
{
	t_stack	*temp;

	while (*top)
	{
		temp = *top;
		*top = (*top)->next;
		free(temp);
	}
}

void	free_m(char **mat)
{
	int	i;

	if (mat == NULL)
		return ;
	i = 0;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}

int	lin_len(char **matriz)
{
	int	i;

	i = 0;
	while (matriz[i])
		i ++;
	return (i);
}

int	taking_paramers(t_stack **a, char **argus)
{
	int		mat_len;
	int		i;
	long	l;

	if (argus == NULL || (alpha_and_signal_check(argus) == -1))
		return (-1);
	i = 0;
	mat_len = lin_len(argus) - 1;
	while (i <= mat_len)
	{
		l = ft_atol(argus[mat_len]);
		if (l < (long)INT_MIN || l > (long)INT_MAX)
			return (-1);
		if (is_sign_isolated(argus[mat_len]) == -1)
			return (-1);
		push(a, ft_atoi(argus[mat_len]), 0);
		mat_len --;
	}
	if (checkdup(a) == -1)
		return (-1);
	free_m(argus);
	return (42);
}

int	taking_paramers_2(t_stack **a, char **argus)
{
	int		mat_len;
	int		i;
	long	l;

	if (argus == NULL || (alpha_and_signal_check(argus) == -1))
		return (-1);
	i = 0;
	mat_len = lin_len(argus) - 1;
	while (i <= mat_len)
	{
		l = ft_atol(argus[mat_len]);
		if (l < (long)INT_MIN || l > (long)INT_MAX)
			return (-1);
		if (is_sign_isolated(argus[mat_len]) == -1)
			return (-1);
		push(a, ft_atoi(argus[mat_len]), 0);
		mat_len --;
	}
	return (checkdup(a));
}
