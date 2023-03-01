#include "push_swap.h"

int	* swap_sa(t_container * stack)
{
	int temp;

	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp;
	return (stack->stack_a);
}
