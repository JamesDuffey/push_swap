/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:34:09 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:39:50 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		do_op(char *s, t_stack **a, t_stack **b)
{
	if ((ft_strcmp(s, "sa")) == 0)
		sa(a);
	else if ((ft_strcmp(s, "sb")) == 0)
		sb(b);
	else if ((ft_strcmp(s, "ss")) == 0)
		ss(a, b);
	else if ((ft_strcmp(s, "pa")) == 0)
		push(a, b);
	else if ((ft_strcmp(s, "pb")) == 0)
		push(b, a);
	else if ((ft_strcmp(s, "ra")) == 0)
		rotate(a);
	else if ((ft_strcmp(s, "rb")) == 0)
		rotate(b);
	else if ((ft_strcmp(s, "rr")) == 0)
		rr(a, b);
	else if ((ft_strcmp(s, "rra")) == 0)
		revrotate(a);
	else if ((ft_strcmp(s, "rrb")) == 0)
		revrotate(b);
	else if ((ft_strcmp(s, "rrr")) == 0)
		rrr(a, b);
	else
		return (0);
	return (1);
}

int		print_op(char *s)
{
	if ((ft_strcmp(s, "sa")) == 0)
		ft_putstr("sa\n");
	else if ((ft_strcmp(s, "sb")) == 0)
		ft_putstr("sb\n");
	else if ((ft_strcmp(s, "ss")) == 0)
		ft_putstr("ss\n");
	else if ((ft_strcmp(s, "pa")) == 0)
		ft_putstr("pa\n");
	else if ((ft_strcmp(s, "pb")) == 0)
		ft_putstr("pb\n");
	else if ((ft_strcmp(s, "ra")) == 0)
		ft_putstr("ra\n");
	else if ((ft_strcmp(s, "rb")) == 0)
		ft_putstr("rb\n");
	else if ((ft_strcmp(s, "rr")) == 0)
		ft_putstr("rr\n");
	else if ((ft_strcmp(s, "rra")) == 0)
		ft_putstr("rra\n");
	else if ((ft_strcmp(s, "rrb")) == 0)
		ft_putstr("rrb\n");
	else if ((ft_strcmp(s, "rrr")) == 0)
		ft_putstr("rrr\n");
	else
		return (0);
	return (1);
}

int		print_do_op(char *s, t_stack **a, t_stack **b)
{
	if (!print_op(s))
	{
		//while(1);
		ft_putstr_fd("Error\n", 2);
		exit(0);
	}
	if (!do_op(s, a, b))
	{
		//while(1);
		ft_putstr_fd("Error\n", 2);
		exit(0);
	}
	return (0);
}
