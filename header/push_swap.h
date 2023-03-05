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

int * fill_in(int i);
int arg_size(char * arg[]);
int	* swap_sa(t_container * stack);
int	* swap_sb(t_container * stack);
int * swap_ra(t_container * stack);
int * swap_rb(t_container * stack);
int * swap_rra(t_container * stack);
int * swap_rrb(t_container * stack);
t_container * swap_ss(t_container * stack);
t_container * swap_rr(t_container * stack);
t_container * swap_pa(t_container * stack);
t_container * swap_pb(t_container * stack);
t_container * swap_rrr(t_container * stack);
t_container * init_stack(t_container * stack, char * args[]);
#endif
