#include "push_swap.h"

int * swap_rra(t_container * stack)
{
	int index;
	int size;
	int * get_stack;

	size = 0;
	while(stack->stack_a[size])
		size++;
	get_stack = ft_calloc(size, sizeof(int *));
	size = size - 1;
	index = 1;
	while (index <= size)
	{
		get_stack[index] = stack->stack_a[index - 1];
		index++;
	}
	get_stack[0] = stack->stack_a[size];
	return (get_stack);
}
