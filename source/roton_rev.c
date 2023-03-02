#include "push_swap.h"

int * swap_rra(t_container * stack)
{
	int * get_stack;
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while (stack->stack_a[i])
		i++;
	get_stack = ft_calloc(i, sizeof(int *));
	while (stack->stack_a[j])
	{
		temp = stack->stack_a[j];
		if (j == 1)
		{
			get_stack[j] = stack->stack_a[i - 1];
			get_stack[i] = temp;
		}
		else
			get_stack[j] = stack->stack_a[j];
		j++;
	}
	j = 0;
	while (get_stack[j])
	{
		ft_printf("%i\n", get_stack[j]);
		j++;
	}
	return (get_stack);
}
