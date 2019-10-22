/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:19:36 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:40:13 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		push_to_b(t_stack **a, t_stack **b, int count, t_values *vals)
{
	t_stack		*ptra;
	int			i;

	ptra = *a;
	i = 0;
	while (ptra)
	{
		ptra = *a;
		if (i == count)
		{
			break ;
		}
		if (ptra->value >= vals->min && ptra->value <= vals->max)
		{
			print_do_op("pb", a, b);
			i++;
		}
		else
		{
			print_do_op("ra", a, b);
		}
	}
}

void		push_min(t_stack **a, t_stack **b, int **list, t_values *vals)
{
	print_do_op("pa", a, b);
	print_do_op("ra", a, b);
	vals->min = next_val(list, vals->min);
}

void		set_p_vals(t_values *vals)
{
	vals->p_min = vals->min;
	vals->p_max = vals->max;
}

void		sort_b(t_stack **a, t_stack **b, int **list, t_values *vals)
{
	t_stack		*ptrb;

	ptrb = *b;
	set_p_vals(vals);
	while (ptrb)
	{
		ptrb = *b;
		if (ptrb->next == NULL || vals->min == vals->max)
		{
			print_do_op("pa", a, b);
			break ;
		}
		if (ptrb->value == vals->max)
		{
			print_do_op("pa", a, b);
			vals->max = prev_val(list, vals->max);
		}
		else if (ptrb->value == vals->min)
		{
			push_min(a, b, list, vals);
		}
		else
			print_do_op("rb", a, b);
	}
	rot_top_down(a, b, vals->p_min, vals->p_max);
}

int			check_op(t_stack **b, int num)
{
	t_stack		*ptr;
	int			i;
	int			k;

	ptr = *b;
	i = 0;
	k = 0;
	while (ptr)
	{
		if (ptr->value == num)
			break ;
		ptr = ptr->next;
		i++;
	}
	while (ptr)
	{
		ptr = ptr->next;
		k++;
	}
	return ((i < (k / 2)) ? 1 : 0);
}
