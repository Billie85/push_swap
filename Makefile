#MAIN = main.c
SRCS    = binary_search.c check_error.c find_max_value.c new_node_data.c sort_compression.c\
bubble_sort.c count_bits.c return_error.c\
check_array_sorted.c check_null.c is_sorted.c radix_sort.c count_nodes.c

OPERATIONS_SRCS = ra.c rra.c sa.c rb.c

LIBFT_SRCS = ft_atoi.c ft_isdigit.c ft_lstsize.c ft_memcpy.c ft_memset.c

LIST_SRCS = add_back.c first_node.c ft_lstlast.c\
 pop_back.c push_node.c list_free.c

LESS_THAN_5ARGS_SRCS = sort_argument_size3.c sort_argument_size4.c\
sort_argument_size5.c sort_than_6args.c


CC	= gcc 
RM	= rm -rf
CFLAGS	= -Wall -Wextra -Werror -I includes

NAME	= push_swap

all     : $(NAME)

SRCS_PATH 					= $(addprefix srcs/,$(SRCS))
OPERATIONS_SRCS_PATH 		= $(addprefix operations/,$(OPERATIONS_SRCS))
LIBFT_SRCS_PATH				= $(addprefix libft/,$(LIBFT_SRCS))
LIST_SRCS_PATH 				= $(addprefix list/,$(LIST_SRCS))
LESS_THAN_5ARGS_SRCS_PATH 	= $(addprefix less_than_5args/,$(LESS_THAN_5ARGS_SRCS))

SRCS_OBJS					= $(SRCS_PATH:.c=.o)
OPERATIONS_SRCS_OBJS		= $(OPERATIONS_SRCS_PATH:.c=.o)
LIBFT_SRCS_OBJS				= $(LIBFT_SRCS_PATH:.c=.o)
LIST_SRCS_OBJS				= $(LIST_SRCS_PATH:.c=.o)
LESS_THAN_5ARGS_SRCS_OBJS	= $(LESS_THAN_5ARGS_SRCS_PATH:.c=.o)

OBJS += $(SRCS_OBJS)
OBJS += $(OPERATIONS_SRCS_OBJS)
OBJS += $(LIBFT_SRCS_OBJS)
OBJS += $(LIST_SRCS_OBJS)
OBJS += $(LESS_THAN_5ARGS_SRCS_OBJS)
OBJS += main.o

$(NAME)	: $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)
#gcc -g libft/*.c list/*.c srcs/*.c operations/*.c main.c less_than_5args/*.c
#gcc ${CFLAGS} main.c $(SRCS_PATH) $(OPERATIONS_SRCS_PATH) $(LIBFT_SRCS_PATH) $(LESS_THAN_5ARGS_SRCS_PATH) $(LIST_SRCS_PATH) -o $(NAME)

%.o : %.c
	gcc $(CFLAGS) -c $< -o $@

main.o : main.c
	$(CC) $(CFRAGS) -c main.c

test2	:
	make
	valgrind ./$(NAME) 4 1

test3	:
	make
	valgrind ./$(NAME) 4 1 -100

test4	:
	make
	valgrind ./$(NAME) 4 1 6 10

test5	:
	make
	valgrind ./$(NAME) 0 7 1 2 49

test6	:
	make
	valgrind ./$(NAME) 4 0 1 9 10 7

test7	:
	make
	valgrind ./$(NAME) 1 4 0 8 10 9 200


clean	: 
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re bonus
