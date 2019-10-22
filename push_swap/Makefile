# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jduffey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 11:44:56 by jduffey           #+#    #+#              #
#    Updated: 2019/10/22 11:24:01 by jduffey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKELIB = -C libft
LIB = libft/libft.a
PS = push_swap
CR = checker
FLAGS = -Wall -Werror -Wextra
CSRC = 		checker.c \
	   	src/stackpopulate.c \
		src/ops.c \
		src/opsab.c \
		src/readinput.c \
		src/free.c \
		src/numcount.c \
		src/pop_push.c \
		src/do_op.c \
		src/check_list.c \
		src/validator.c \
		src/populate.c \
		$(LIB)

PSRC = 		push_swap.c \
	   	src/stackpopulate.c \
		src/ops.c \
		src/opsab.c \
	   	src/pop_push.c \
		src/check_list.c \
		src/numcount.c \
		src/free.c \
		src/do_op.c \
		src/get_val.c \
		src/dosort.c \
		src/solve_a.c \
		src/solve_b.c \
		src/choose_sort.c \
		src/validator.c \
		src/populate.c	\
	   	$(LIB)

all: $(MAKELIB) $(CR) $(PS)

$(MAKELIB):
	@$(MAKE) $(MAKELIB)

$(CR):
	gcc $(FLAGS) $(CSRC) -o $(CR)

$(PS):
	gcc $(FLAGS) $(PSRC) -o $(PS)

clean:
	rm -fr $(CR) $(PS) $(CR).dSYM $(PS).dSYM
	rm -f libft/*.o

fclean: clean
	rm -f libft/libft.a

re: clean all
