/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:20:57 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/13 12:27:35 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		re_order_b(t_stack **a, t_stack **b, int max)
{
	t_stack *ptra;

	ptra = *a;
	while (ptra)
	{
		ptra = *a;
		if (ptra->value == max)
		{
			print_do_op("ra", a, b);
			break ;
		}
		else
		{
			print_do_op("ra", a, b);
		}
	}
}

void		rot_top_down(t_stack **a, t_stack **b, int min, int max)
{
	t_stack *ptra;

	ptra = *a;
	while (ptra)
	{
		ptra = *a;
		if (!(ptra->value >= min && ptra->value <= max))
			break ;
		if (ptra->value == max)
		{
			print_do_op("ra", a, b);
			break ;
		}
		print_do_op("ra", a, b);
	}
}

void		re_order_a(t_stack **a, t_stack **b, int val)
{
	t_stack *ptra;

	ptra = get_tail(a);
	while (ptra->value != val)
	{
		ptra = get_tail(a);
		if (ptra->value == val)
			break ;
		else
			print_do_op("rra", a, b);
	}
}
