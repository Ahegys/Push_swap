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

int	find_min_index(int *stack, int size)
{
	int	min;
	int	i;
	int	index;

	i = 0;
	min = stack[0];
	index = 0;
	while (i < size)
	{
		if (stack[i] < min)
		{
			min = stack[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void    four(t_container *stack)
{
	radix(stack);
}
