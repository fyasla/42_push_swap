/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faysal <faysal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:51:54 by fbougama          #+#    #+#             */
/*   Updated: 2021/08/29 20:33:57 by faysal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_list2
{
	struct s_list2	*prev;
	int				content;
	struct s_list2	*next;
}				t_list2;

typedef struct s_stacks
{
	t_list2	**a;
	t_list2	**b;
}				t_stacks;

//double_list.c
t_list2		*ft_lst2new(int content);
void		ft_lst2addtop(t_list2 **bottom, int content);
t_list2		*ft_lst2top(t_list2 **bottom);
void		ft_lst2deltop(t_list2 **bottom);
int			is_integer(char *str);

//stacks_instructions.c
void		swap(t_list2 **bottom);
void		rotate(t_list2 **bottom);
void		reverse_rotate(t_list2 **bottom);
void		push_ab(t_list2 **a_bottom, t_list2 **b_bottom);
void		print_stack(t_list2 **bottom);
int			stack_length(t_list2 **bottom);

//check_input.c
int			str_is_inf(char *str, char *max);
int			check_int_range(char *str);
int			check_arguments(int	arg_nb, char **arg_list);
int			check_duplicates(int *int_list, int int_nb);
t_stacks	*initiate_stacks(int arg_nb, char **arg_list);

//checker_utils.c
int			is_sorted(t_list2 **bottom);
int			is_empty(t_list2 **bottom);
int			is_ok(t_stacks *stacks);
int			check_args_error(char *inst_list, int ac, char **args, int mode);
void		set_args(char ***args, int *n, char **av, int ac);

//instructions_parse.c
int			ps_error(void);
int			end_of_input(char *buf);
int			instructions_parse(t_stacks *stacks);
int			instructions_parse2(t_stacks *stacks, char *buf);
int			instructions_parse3(t_stacks *stacks, char *buf);

//sort.c
char		*sort(t_stacks *stacks, char *inst_list);
char		*sort_2(t_list2 **bottom, char *inst_list);
char		*sort_3(t_list2 **a_bottom, char *inst_list);
char		*sort_10(t_stacks *stacks, char *inst_list);
char		*sort_plus(t_stacks *stacks, char *inst_list);

//stack_transfo.c
int			*cpy_stack_to_tab(t_list2 **bottom);
int			*bubble_sort(int *tab, int size);
int			get_index_tab(int n, int *tab, int size);
void		tab_to_stack(t_list2 **bottom, int *tab, int size);
void		stack_transfo(t_list2 **bottom);

//sort_utils.c
char		*push_min_ab(t_list2 **a_bottom, t_list2 **b_bottom, char *inst_l);
char		*push_max_ab(t_list2 **a_bottom, t_list2 **b_bottom, char *inst_l);
int			get_index(t_list2 **bottom, int n);
char		*add_inst(char *inst, char *inst_list);
void		free_stacks(t_stacks *stacks);

//sort_utils2.c
int			stack_min(t_list2 **bottom);
int			stack_max(t_list2 **bottom);
char		*divide(t_stacks *stacks, int n, char *inst_list);
int			nb_of_sets(int size);
void		ft_lst2clear(t_list2 **bottom);

//free_args.c
void		free_args(char **args, int ac);

#endif