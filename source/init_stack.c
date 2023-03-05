#include "push_swap.h"

int * fill_in(int i)
{
	int * fill;

	fill = ft_calloc(i, sizeof(int *));
	return (fill);
}

int arg_size(char * arg[])
{
	int i;

	i = 1;
	while (arg[i])
		i++;
	return (i);
}

t_container * init_stack(t_container * stack, char * args[])
{
	int i;
	int j;

	j = 0;
	stack->stack_a = fill_in(arg_size(args));
	stack->stack_b = fill_in(arg_size(args));
	i = 1;
	while (args[i])
	{
		stack->stack_a[j] = ft_atoi(args[i]);
		stack->stack_b[j] = ft_atoi(args[i]);
		j++;
		i++;
	}
	return (stack);
}
