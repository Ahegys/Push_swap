#include "push_swap.h"

int	* swap_sa(t_container * stack)
{
	int temp;

	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp;
	return (stack->stack_a);
}

int	* swap_sb(t_container * stack)
{
	int temp;

	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = temp;
	return (stack->stack_b);
}
