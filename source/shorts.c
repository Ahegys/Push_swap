#include "../header/push_swap.h"

void	two(t_container * stack) 
{ 
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
}

void three(t_container * stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
	if (stack->stack_a[1] > stack->stack_a[2])
	{
		rra(stack);
		if (stack->stack_a[0] > stack->stack_a[1])
			sa(stack);
	}
	else if (stack->stack_a[0] > stack->stack_a[1])
		ra(stack);
}
