/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:38:24 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/19 09:28:36 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		choose_sort(t_stack **a, t_stack **b, int **list, t_values *vals)
{
	if (vals->count >= 200)
		sort500(a, b, list, vals);
	else if (vals->count >= 20)
		sort100(a, b, list, vals);
	else if (vals->count == 2)
		sorttwo(a, b);
	else if (vals->count == 3)
		sortthree(a, b);
	else if (vals->count == 5)
		sortfive(a, b, vals, list);
	else if (vals->count > 5 && vals->count < 20)
		sort20(a, b, list, vals);
}

void		sorttwo(t_stack **a, t_stack **b)
{
	if ((*a)->value > (*a)->next->value)
		print_do_op("sa", a, b);
}

void		sortthree(t_stack **a, t_stack **b)
{
	int ia;
	int ib;
	int ic;

	ia = (*a)->value;
	ib = (*a)->next->value;
	ic = (*a)->next->next->value;
	if (ia > ib && ia > ic && ib < ic)
		print_do_op("ra", a, b);
	else if (ib > ic && ib > ia && ia > ic)
		print_do_op("rra", a, b);
	else if (ia > ib && ia > ic && ib > ic)
	{
		print_do_op("ra", a, b);
		print_do_op("sa", a, b);
	}
	else if (ic > ib && ic > ia && ia > ib)
		print_do_op("sa", a, b);
	else if (ib > ia && ib > ic && ic > ia)
	{
		print_do_op("rra", a, b);
		print_do_op("sa", a, b);
	}
}

void		set_vals_sortfive(t_values *vals, int **list)
{
	vals->min = get_val(list, 1);
	vals->max = get_val(list, 5);
}

void		sortfive(t_stack **a, t_stack **b, t_values *vals, int **list)
{
	int i;

	i = 0;
	set_vals_sortfive(vals, list);
	while (i < 2)
	{
		if ((*a)->value == vals->min || (*a)->value == vals->max)
		{
			print_do_op("pb", a, b);
			i++;
		}
		else
			print_do_op("ra", a, b);
	}
	sortthree(a, b);
	while (*b)
	{
		if ((*b)->value == vals->min)
			print_do_op("pa", a, b);
		else
		{
			print_do_op("pa", a, b);
			print_do_op("ra", a, b);
		}
	}
}
