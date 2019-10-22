/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dosort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 10:40:14 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/19 09:28:06 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		sort100(t_stack **a, t_stack **b, int **list, t_values *vals)
{
	int i;
	int val;

	i = vals->count;
	val = 0;
	while (i > 20)
	{
		vals->min = get_val(list, ++val);
		vals->max = get_val(list, val += 19);
		push_to_b(a, b, 20, vals);
		if (val > 20 && val / 20 >= 4)
			re_order_a(a, b, vals->r_max);
		else if (val > 20)
			re_order_b(a, b, get_val(list, val - 20));
		sort_b(a, b, list, vals);
		i -= 20;
		vals->r_max = get_val(list, val);
	}
	if (i > 0)
	{
		vals->min = get_val(list, vals->count - i + 1);
		vals->max = get_val(list, vals->count);
		push_to_b(a, b, i, vals);
		sort_b(a, b, list, vals);
	}
}

void		sort500(t_stack **a, t_stack **b, int **list, t_values *vals)
{
	int i;
	int val;

	i = vals->count;
	val = 0;
	while (i > 0)
	{
		vals->min = get_val(list, ++val);
		vals->max = get_val(list, val += 43);
		if (i < 44)
		{
			vals->min = get_val(list, vals->count - i + 1);
			vals->max = get_val(list, vals->count);
			push_to_b(a, b, i, vals);
		}
		else
			push_to_b(a, b, 44, vals);
		if (val > 44 && (val / 44 >= 6))
			re_order_a(a, b, vals->r_max);
		else if (val > 44)
			re_order_b(a, b, get_val(list, val - 44));
		sort_b(a, b, list, vals);
		i -= 44;
		vals->r_max = get_val(list, val);
	}
}

void	sort20(t_stack **a, t_stack **b, int **list, t_values *vals)
{
	int i;
	int val;

	i = vals->count;
	val = 0;
	while (i > 5)
	{
		vals->min = get_val(list, ++val);
		vals->max = get_val(list, val += 4);
		push_to_b(a, b, 5, vals);
		if (val > 5 && val / 5 >= 3)
			re_order_a(a, b, vals->r_max);
		else if (val > 5)
			re_order_b(a, b, get_val(list, val - 5));
		sort_b(a, b, list, vals);
		i -= 5;
		vals->r_max = get_val(list, val);
	}
	if (i > 0)
	{
		vals->min = get_val(list, vals->count - i + 1);
		vals->max = get_val(list, vals->count);
		push_to_b(a, b, i, vals);
		sort_b(a, b, list, vals);
	}
}
