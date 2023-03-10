#include "push_swap.h"

void	sa(t_container * stack)
{
		stack->stack_a[0] ^= stack->stack_a[1];
		stack->stack_a[1] ^= stack->stack_a[0];
		stack->stack_a[0] ^= stack->stack_a[1];
		ft_printf("sa\n");
}

void	ra(t_container * stack)
{
	stack->stack_a[0] ^= stack->stack_a[stack->size - 1];
	stack->stack_a[stack->size] ^= stack->stack_a[0];
	stack->stack_a[0] ^= stack->stack_a[stack->size - 1];
}

void	rra(t_container * stack)
{
	int temp;
	int index;

	temp = stack->stack_a[stack->size - 1];
	index = stack->size;
	while (index--)
		stack->stack_a[index] = stack->stack_a[index - 1];
	stack->stack_a[index + 1] = temp;
	ft_printf("rra\n");
}
