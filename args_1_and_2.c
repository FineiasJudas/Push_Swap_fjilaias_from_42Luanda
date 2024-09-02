/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_1_and_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:19:08 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/28 18:25:12 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_1(t_stack **a, char **str)
{
	str = ft_split(str[1], ' ');
	if (str == NULL)
		return ;
	if (taking_paramers(a, &str[0]) == -1)
	{
		free_m(str);
		if (a)
			free_stack(a);
		ft_error();
	}
}

void	arg_2(t_stack **a, char **str)
{
	if (taking_paramers_2(a, &str[1]) == -1)
	{
		if (a)
			free_stack(a);
		ft_error();
	}
}
