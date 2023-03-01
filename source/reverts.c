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
	int j = 0;

	i = 0;
	while (stack->stack_b[i])
		i++;
	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[i - 1];
	stack->stack_b[i - 1] = temp;
	ft_printf("stack test\n");
	while (stack->stack_b[j])
	{
		ft_printf("%i\n",stack->stack_b[j]);
		j++;
	}
	return (stack->stack_b);
}
