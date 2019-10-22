/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:17:27 by jduffey           #+#    #+#             */
/*   Updated: 2019/09/22 17:13:30 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/src/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_values
{
	int				f_val;
	int				r_max;
	int				min;
	int				max;
	int				count;
	int				p_min;
	int				p_max;
	int				ac;
}					t_values;

void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				revrotate(t_stack **a);
void				push(t_stack **dst, t_stack **src);
int					pop(t_stack **head);
void				rotate(t_stack **a);
int					numcount(char *s);
int					first_val(int **list, int index);
int					next_val(int **list, int min);
int					get_val(int **list, int index);
int					prev_val(int **list, int val);
t_stack				*get_tail(t_stack **cur);
void				push_to_b(t_stack **a, t_stack **b
					, int count, t_values *vals);
void				sort_b(t_stack **a, t_stack **b
					, int **list, t_values *vals);
void				sort100(t_stack **a, t_stack **b
					, int **list, t_values *vals);
void				sort500(t_stack **a, t_stack **b
					, int **list, t_values *vals);
void				re_order_a(t_stack **a, t_stack **b, int max);
void				re_order_b(t_stack **a, t_stack **b, int val);
void				rot_top_down(t_stack **a, t_stack **b, int min, int max);
int					check_op(t_stack **b, int num);
void				addnode(t_stack **head, int val);
t_stack				*stacknew(int argc, char **argv, int type);
int					**normalize(t_stack **stack, int numcount);
int					get_next_line(const int fd, char **line);
int				readinput(t_stack **a, t_stack **b);
int					do_op(char *s, t_stack **a, t_stack **b);
int					check_list(t_stack **a, t_stack **b);
void				free_all(t_stack **a, int **list, t_values *vals);
void				lstfree(t_stack **a, t_values *vals);
int					print_do_op(char *s, t_stack **a, t_stack **b);
int					print_op(char *s);
void				print_stack(t_stack **stack);
void				choose_sort(t_stack **a, t_stack **b, int **list, t_values *vals);
void				sorttwo(t_stack **a, t_stack **b);
void				sortthree(t_stack **a, t_stack **b);
void				sortfive(t_stack **a, t_stack **b, t_values *vals, int **list);
int					check_input(char **argv, int x);
int					dup_check(char **s);
int					check_int(char **s);
void				sort20(t_stack **a, t_stack **b, int **list, t_values *vals);
int					validate(char **argv, int type, char **list);
int 				populate_ps(char **argv, char **tmp_list, t_values *vals, t_stack **a);
int 				populate_cr(char **argv, char **list, t_values *vals, t_stack **a);

#endif
