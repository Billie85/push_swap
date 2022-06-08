/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:46:13 by root              #+#    #+#             */
/*   Updated: 2022/06/08 11:36:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ERROR -1
# define SUCCESS 1

# include <ctype.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef enum e_bool
{
	FALSE,
	TRUE
}t_bool;

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}t_node;

void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_atoi(const char *str);
int					binary_search(int array[], int number_total, int element);
void				*ft_memset(void *buf, int ch, size_t n);
int					check_null(int *top);
void				print(t_node *top);
t_node				*rotate(t_node *head, int k);
t_node				*first_node(int data);
void				add_back(t_node *lst, t_node *new_lst);
int					bubble_sort(int *sort, int argc);
void				stack_print(t_node *top);
void				ra(t_node **list_head);
void				print(t_node *head);
void				rra(t_node **list_head);
t_node				*push(int data, t_node **top);
int					count_nodes(t_node *head_ref);
int					find_max_value(int number[], int n);
unsigned int		count_bits(unsigned int num);
t_node				*ft_lstlast(t_node *lst);
void				pb(t_node *stack_b);
void				push_node(t_node *lst, t_node *new_lst);
t_node				*pop_back(t_node *lst);
void				push_node(t_node *lst, t_node *new_lst);
int					*sort_compression(int argc, int *copy_atoi,
						int *normal_argument);
t_node				*new_node_data(int argc, int *array_result);
void				coordinate_sort_compression(int argc, int *coppy_atoi,
						int *normal_argument);
void				radix_sort(t_node *stack_a, int total_bits, int argc);
void				sort(t_node *stack);
t_bool				ft_isdigit(int c);
t_bool				check_sign(char *num);
t_bool				array_is_sorted(int arr[], int num);
int					ft_space(const char *ss);
void				print2(t_node *head);
int					check_error(int argc, char *argv[]);
void				sa(t_node *stack_a);
int					count_node(t_node *head);
int					find_min_value(int number[], int n);
void				sort_argument_size4(t_node *stack_a);
void				sort_argument_size3(t_node *stack_a);
void				sort_argument_size5(t_node *stack_a);
int					is_sorted(t_node **stack);
int					ft_lstsize(t_node *lst);
void				rb(t_node **list_head);
int					return_error(void);
void				list_free(t_node **list);
void				sort_than_6args(t_node *stack_a, int argc);
#endif
