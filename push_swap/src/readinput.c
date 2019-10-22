/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readinput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 12:36:33 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:39:03 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	readinput(t_stack **a, t_stack **b)
{
	char	*line;
	int		ret;

	line = NULL;
	ret = 0;
	while (get_next_line(0, &line))
	{
		if (ft_strcmp(line, "Error") == 0)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		if ((*a)->next == NULL && line != 0)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		else if ((*a)->next == NULL)
			return (0);
		if ((ret = do_op(line, a, b)) == 0)
				exit(0); 
		free(line);
	}
	return (0);
}
