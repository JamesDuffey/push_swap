/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:56:42 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:41:21 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	char		**list;
	t_values	*vals;

	vals = NULL;
	list = NULL;
	vals = (t_values *)malloc(sizeof(t_list));
	if (argc < 2 || ft_strlen(argv[1]) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	vals->ac = argc;
	if (populate_cr(argv, list, vals, &a))
		return (0);
	if (readinput(&a, &b))
		return (0);
	if (!check_list(&a, &b))
		return (0);
	lstfree(&a, vals);
	print_stack(&a);
	return (0);
}
