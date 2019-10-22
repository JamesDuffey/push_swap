/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:00:55 by jduffey           #+#    #+#             */
/*   Updated: 2019/10/22 11:40:27 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int		check_input(char **argv, int x)
{
	int i;
	int j;
	int tmp;
	
	if (x == 0)
		i = 1;
	else
		i = 0;
	tmp = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][0] == '-')
				j++;
			else if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int		dup_check(char **s)
{
	int i;
	int j;
	int args;

	i = 0;
	args = 0;
	while (s[args])
		args++;
	while (i < args - 1)
	{
		j = i + 1;
		while (s[j])
		{
			if (s[i] == s[j] || ft_atol(s[i]) == ft_atol(s[j]))
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

int		check_int(char **s)
{
	int max;
	int min;
	int i;

	min = -2147483648;
	max = 2147483647;
	i = 0;
	while (s[i])
	{
		if (ft_atol(s[i]) >= min && ft_atol(s[i]) <= max)
			i++;
		else
			return (0);
	}
	return (1);
}

int		validate(char **argv, int type, char **list)
{
	
	if (type == 0)
	{
		
		if (!(check_input(list, 1) && dup_check(list) && check_int(list)))
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
	}
	else if (type == 1)
	{
		
		if (!(check_input(argv, 0) && dup_check(argv + 1) && check_int(argv + 1)))
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
	}
	return (0);
}
