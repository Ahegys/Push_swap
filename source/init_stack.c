#include "push_swap.h"

t_container * init_stack(t_container * stack, char * args[])
{
	int i;
	int j;

	i = 1;
	while (args[i])
		i++;
	j = 0;
	stack->stack_a = ft_calloc(i, sizeof(int *));
	stack->stack_b = ft_calloc(i, sizeof(int *));
	i = 1;
	while (args[i])
	{
		stack->stack_a[j] = ft_atoi(args[i]);
		j++;
		i++;
	}
	return (stack);
}
