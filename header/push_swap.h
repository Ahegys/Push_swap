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
#define ft_memset memset

void	sa(t_container * stack);
void	sb(t_container * stack);
void	ra(t_container * stack);
void	rb(t_container * stack);
void	pa(t_container * stack);
void	pb(t_container * stack);
void	rra(t_container * stack);
void	rrb(t_container * stack);
void	two(t_container * stack);
int sorted(t_container *stack);
void	four(t_container * stack);
void	three(t_container * stack);
void	radix(t_container * stack);
void	stack_size(t_container * stack);
void	print_stack(int * stack, int size);
void	selection(int size, t_container * stack);
t_container * push(t_container * stack, char * num);
t_container * fill_in(t_container * stack, int i);
#endif
