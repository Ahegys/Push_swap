#include "push_swap.h"

int * fill_containers_a(int * stack, int * to_fill)
{
	int i;
	int j;

	j = 1;
	i = 0;
	while (stack[i])
	{
		to_fill[j] = stack[i];
		i++;
		j++;
	}
	return (to_fill);
}

int * fill_containers_b(int * stack, int * to_fill)
{
	int i;
	int j;

	j = 0;
	i = 1;
	while (stack[i])
	{
		to_fill[j] = stack[i];
		i++;
		j++;
	}
	return (to_fill);
}
t_container * swap_pa(t_container * stack)
{
	int * cont_a;
	int * cont_b;

	cont_a = ft_calloc(stack_size(stack->stack_a) + 2, sizeof(int *));
	cont_a[0] = stack->stack_b[0];
	cont_a = fill_containers_a(stack->stack_a, cont_a);
	cont_b = ft_calloc(stack_size(stack->stack_b) - 1, sizeof(int *));
	cont_b = fill_containers_b(stack->stack_b, cont_b);
	stack->stack_a = cont_a;
	stack->stack_b = cont_b;
	return (stack);
}

t_container * swap_pb(t_container * stack)
{
	int * cont_a;
	int * cont_b;

	cont_b = ft_calloc(stack_size(stack->stack_b) + 2, sizeof(int *));
	cont_b[0] = stack->stack_a[0];
	cont_b = fill_containers_a(stack->stack_b, cont_b);
	cont_a = ft_calloc(stack_size(stack->stack_a) - 1, sizeof(int *));
	cont_a = fill_containers_b(stack->stack_a, cont_a);
	stack->stack_a = cont_a;
	stack->stack_b = cont_b;
	return (stack);
}
