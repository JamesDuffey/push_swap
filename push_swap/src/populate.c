/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:27:37 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:21:54 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int 	populate_ps(char **argv, char **tmp_list, t_values *vals, t_stack **a) 
{
	if (vals->ac == 2)
	{
		tmp_list = ft_strsplit(argv[1], ' ');
		if (validate(argv, 0, tmp_list))
			return (0);
		vals->count = numcount(argv[1]);
		*a = stacknew(vals->count - 1, tmp_list, 0);
	}
	else
	{
		if (validate(argv, 1, argv + 1))
			return (0);
		vals->count = vals->ac - 1;
		*a = stacknew(vals->count, argv, 1);
	}
    return (1);
}

int 	populate_cr(char **argv, char **list, t_values *vals, t_stack **a)
{
    if (vals->ac == 2)
	{
		vals->count = numcount(argv[1]);
		list = ft_strsplit(argv[1], ' ');
		if (validate(argv, 0, list))
			return (1);
		*a = stacknew(vals->count - 1, list, 0);
	}
	else
	{
		if (validate(argv, 1, list))
			return (1);	
		vals->count = vals->ac - 1;
		*a = stacknew(vals->count, argv, 1);
	}
    return (0);
}
