#include "push_swap.h"

int stack_size(int * stack)
{
	int i;
	
	i = 0;
	while (stack[i])
		i++;
	return (i);
}

int * swap_rra(t_container * stack)
{
	int index;
	int size;
	int * get_stack;

	get_stack = ft_calloc(stack_size(stack->stack_a), sizeof(int *));
	size = stack_size(stack->stack_a) - 1;
	index = 1;
	while (index <= size)
	{
		get_stack[index] = stack->stack_a[index - 1];
		index++;
	}
	get_stack[0] = stack->stack_a[size];
	return (get_stack);
}

int * swap_rrb(t_container * stack)
{
	int index;
	int size;
	int * get_stack;

	
	get_stack = ft_calloc(stack_size(stack->stack_a), sizeof(int *));
	size = stack_size(stack->stack_a) - 1;
	index = 1;
	while (index <= size)
	{
		get_stack[index] = stack->stack_b[index - 1];
		index++;
	}
	get_stack[0] = stack->stack_b[size];
	return (get_stack);
}

t_container * swap_rrr(t_container * stack)
{
	stack->stack_a = swap_rra(stack);
	stack->stack_b = swap_rrb(stack);
	return (stack);
}
