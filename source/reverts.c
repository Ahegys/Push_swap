#include "push_swap.h"

int * swap_ra(t_container * stack)
{
	int i;
	int temp;

	i = 0;
	while (stack->stack_a[i])
		i++;
	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[i - 1];
	stack->stack_a[i - 1] = temp;
	return (stack->stack_a);
}

int * swap_rb(t_container * stack)
{
	int i;
	int temp;

	i = 0;
	while (stack->stack_b[i])
		i++;
	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[i];
	stack->stack_b[i] = temp;
	return (stack->stack_b);
}

t_container * swap_rr(t_container * stack)
{
	int i = 0;
	stack->stack_a = swap_ra(stack);
	stack->stack_b = swap_rb(stack);
	while (stack->stack_a[i])
	{
		ft_printf("OK, stack is write %i\n", stack->stack_a[i]);
		i++;
	}
	return (stack);
}
