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
void	ss(t_container * stack);
void	rr(t_container * stack);
void	pa(t_container * stack);
void	pb(t_container * stack);
void	rrr(t_container * stack);
void	rra(t_container * stack);
void	rrb(t_container * stack);
void	two(t_container * stack);
int sorted(t_container *stack);
void	four(t_container * stack);
void	three(t_container * stack);
void	radix(t_container * stack);
void radix_sort(t_container *st);
void	push_order(t_container * stack);
void	stack_size(t_container * stack);
void	print_stack(int * stack, int size);
int check_sort(t_container * st);
void exit_handler(t_container *st, int exit_status);
void	selection(int size, t_container * stack);
t_container * fill_in(t_container * stack, int i);
void	selection_sort(t_container * stack, int size);
t_container * push(t_container * stack, char * num);
void	send_b(t_container * stack, int ref, int rotation);
int	find_min_index(t_container * stack, int start, int end);
void	bucket_send(t_container * stack, size_t first, size_t last);
void	bucket_sort(t_container * stack, int bucket[], int size, int limiter);
#endif
