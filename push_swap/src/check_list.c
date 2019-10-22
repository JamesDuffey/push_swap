/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:21:20 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:06:55 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		check_list(t_stack **a, t_stack **b)
{
	t_stack *ptr;
	t_stack *ptrb;

	ptr = *a;
	ptrb = *b;
	if (ptrb)
		return (1);
	if (ptr->next == NULL)
	{
		ft_putstr("OK\n");
		return (0);
	}
	while (ptr->next != NULL)
	{
		if (ptr->value > ptr->next->value)
		{
			ft_putstr("Error\n");
			return (0);
		}
		ptr = ptr->next;
	}
	ft_putstr("OK\n");
	return (1);
}
