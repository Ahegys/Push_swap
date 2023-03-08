#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "s_funct.h"
#include "stack_container.h"

#define ft_printf printf
#define ft_calloc calloc
#define ft_atoi atoi

int stack_size(int * stack);
int	* swap_sa(t_container * stack);
int	* swap_sb(t_container * stack);
int * swap_ra(t_container * stack);
int * swap_rb(t_container * stack);
int * swap_rra(t_container * stack);
int * swap_rrb(t_container * stack);
void	sort_two(t_container * stack);
void	sort_four(t_container * stack);
void	sort_three(t_container * stack);
void	print_stack(int * stack, int size);
t_container * swap_ss(t_container * stack);
t_container * swap_rr(t_container * stack);
t_container * swap_pa(t_container * stack);
t_container * swap_pb(t_container * stack);
t_container * swap_rrr(t_container * stack);
void	short_sort(t_container * stack, int size);
t_container * push(t_container * stack, char * num);
t_container * fill_in(t_container * stack, int i);
int * fill_containers_a(int * stack, int * to_fill);
int * fill_containers_b(int * stack, int * to_fill);
#endif
