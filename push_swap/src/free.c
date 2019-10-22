/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:43:21 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/13 12:27:50 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_all(t_stack **a, int **list, t_values *vals)
{
	while ((*a))
		pop(a);
	free(list[0]);
	free(list[1]);
	free(vals);
}

void	lstfree(t_stack **a, t_values *vals)
{
	while ((*a))
		pop(a);
	free(vals);
}

