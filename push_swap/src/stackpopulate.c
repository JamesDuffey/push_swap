/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackpopulate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:04:59 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/18 17:24:52 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		addnode(t_stack **head, int val)
{
	t_stack *node;

	node = malloc(sizeof(t_stack));
	node->value = val;
	node->next = *head;
	*head = node;
}

void		add_args(t_stack **a, char **argv, int type, int i)
{
	if (type == 1)
	{
		while (i > 0)
		{
			addnode(a, ft_atoi(argv[i]));
			i--;
		}
	}
	else
	{
		while (i >= 0)
		{
			addnode(a, ft_atoi(argv[i]));
			i--;
		}
	}
}

t_stack		*stacknew(int argc, char **argv, int type)
{
	t_stack		*stack_a;
	int			i;

	if (!(stack_a = malloc(sizeof(t_stack))))
	{
		ft_putstr_fd("KO\n", 2);
		return (0);
	}
	i = argc;
	stack_a->value = ft_atoi(argv[i]);
	stack_a->next = NULL;
	i--;
	add_args(&stack_a, argv, type, i);
	return (stack_a);
}

int			**alloc(int size)
{
	int		**arr;

	arr = (int**)malloc(sizeof(int*) * 2);
	arr[0] = (int *)malloc(sizeof(int) * size);
	arr[1] = (int *)malloc(sizeof(int) * size);
	return (arr);
}

int			**normalize(t_stack **stack, int numcount)
{
	t_stack		*tmp;
	t_stack		*s_tmp;
	int			**values;
	int			count;
	int			i;

	tmp = *stack;
	s_tmp = *stack;
	values = alloc(numcount + 1);
	i = -1;
	while (s_tmp)
	{
		count = 1;
		tmp = *stack;
		while (tmp)
		{
			if ((s_tmp)->value > (tmp)->value)
				count += 1;
			tmp = (tmp)->next;
		}
		values[0][++i] = count;
		values[1][i] = (s_tmp)->value;
		(s_tmp) = (s_tmp)->next;
	}
	return (values);
}
