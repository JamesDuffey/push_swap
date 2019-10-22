/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:17:02 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/13 12:27:10 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **a)
{
	t_stack *tmp;

	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
}

void	sb(t_stack **b)
{
	t_stack *tmp;

	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
}

void	rotate(t_stack **a)
{
	t_stack *first;
	t_stack *last;

	first = *a;
	last = *a;
	if ((*a) == NULL)
		return ;
	while (last->next != NULL)
		last = last->next;
	(*a) = first->next;
	first->next = NULL;
	last->next = first;
	last->next->next = NULL;
}

void	revrotate(t_stack **a)
{
	t_stack *last;
	t_stack *s_last;

	last = *a;
	last = *a;
	s_last = NULL;
	if ((*a) == NULL)
		return ;
	while (last->next != NULL)
	{
		s_last = last;
		last = last->next;
	}
	s_last->next = NULL;
	last->next = *a;
	*a = last;
}
