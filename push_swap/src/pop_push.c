/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop-push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:14:25 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/13 16:28:03 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		pop(t_stack **head)
{
	int			retval;
	t_stack		*next_node;

	retval = -1;
	next_node = NULL;
	if (*head == NULL)
		return (-1);
	next_node = (*head)->next;
	retval = (*head)->value;
	free(*head);
	*head = next_node;
	return (retval);
}

void	push(t_stack **dst, t_stack **src)
{
	t_stack *ptr;

	ptr = malloc(sizeof(t_stack));
	ptr->value = pop(src);
	ptr->next = *dst;
	(*dst) = ptr;
}

void	print_stack(t_stack **stack)
{
	t_stack	*print;

	print = *stack;
	while (print != NULL)
	{
		ft_putnbr(print->value);
		ft_putchar('\n');
		print = print->next;
	}
}
