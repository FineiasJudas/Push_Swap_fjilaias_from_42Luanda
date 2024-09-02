/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:20:59 by fjilaias          #+#    #+#             */
/*   Updated: 2024/08/12 14:10:23 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	indexing_stack(t_stack *a)
{
	int	size;
	int	*tab;

	size = stacklen(a);
	tab = create_tab(a, size);
	if (!tab)
		return ;
	sort_tab(tab, size);
	indexing(a, tab, size);
	free(tab);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		if (ac == 2)
			arg_1(&a, av);
		else
			arg_2(&a, av);
		sorting(&a, &b);
		free_stack(&a);
		free_stack(&b);
	}
	return (0);
}
