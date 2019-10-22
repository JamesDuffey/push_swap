/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_val.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:02:44 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/13 12:27:01 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int			first_val(int **list, int index)
{
	int i;

	i = 0;
	while (list[0][i])
	{
		if (list[0][i] == 1 || list[0][i] == index)
			break ;
		i++;
	}
	return (list[1][i]);
}

int			next_val(int **list, int min)
{
	int i;
	int index;

	i = 0;
	while (1)
	{
		if (list[1][i] == min)
		{
			index = list[0][i] + 1;
			break ;
		}
		i++;
	}
	i = 0;
	while (1)
	{
		if (list[0][i] == index)
			break ;
		i++;
	}
	return (list[1][i]);
}

int			get_val(int **list, int index)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (list[0][i])
	{
		if (list[0][i] == index)
		{
			ret = list[1][i];
			break ;
		}
		i++;
	}
	return (list[1][i]);
}

int			prev_val(int **list, int val)
{
	int index;
	int i;

	i = 0;
	while (1)
	{
		if (list[1][i] == val)
		{
			index = list[0][i] - 1;
			break ;
		}
		i++;
	}
	i = 0;
	while (1)
	{
		if (list[0][i] == index)
			break ;
		i++;
	}
	return (list[1][i]);
}

t_stack		*get_tail(t_stack **cur)
{
	t_stack *tmp;

	tmp = *cur;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp);
}
