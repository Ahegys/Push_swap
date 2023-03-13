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

int	find_min_index(t_container * stack, int start, int end)
{
	int min_index = start;
	int i;

	i = start + 1;
	while (i <= end)
	{
		if (stack->stack_a[i] < stack->stack_a[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

