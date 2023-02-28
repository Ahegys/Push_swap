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

t_func  init();
void	swap_sa(int * swap);
void	swap_sb(int * swap);
void	swap_ss(int * swap);
void	swap_ra(int * swap);
void	swap_rb(int * swap);
void	swap_rr(int * swap);
void	swap_pa(int * swap);
void	swap_pb(int * swap);
void	swap_rra(int * swap);
void	swap_rrb(int * swap);
void	swap_rrr(int * swap);
void	one_hundred();
void	five_hundred();
void	exec_selection(int counter);
int *	stack_a(int size, int * nbr);
int *	stack_b(int size, int * nbr);

#endif
