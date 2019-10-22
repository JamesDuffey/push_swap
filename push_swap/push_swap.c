/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:16:49 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:40:57 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_stack			*a;
	t_stack			*b;
	int				**list;
	char			**tmp_list;
	t_values		*vals;

	list = NULL;
	tmp_list = NULL;
	vals = (t_values *)malloc(sizeof(t_list));
	if (argc < 2 || ft_strlen(argv[1]) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	} 
	vals->ac = argc;
	if (!populate_ps(argv, tmp_list, vals, &a))
		return (0);
	if (argc == 2)
		list = normalize(&a, vals->count - 1);
	else
		list = normalize(&a, vals->count);
	vals->f_val = first_val(list, 0);
	choose_sort(&a, &b, list, vals);
	free_all(&a, list, vals);
	return (0);
}
