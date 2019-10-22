/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opsab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 08:58:01 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/13 12:27:18 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}

void		rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}

void		rrr(t_stack **a, t_stack **b)
{
	revrotate(a);
	revrotate(b);
}
