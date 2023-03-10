#include "../header/push_swap.h"

void	sb(t_container * stack)
{
		stack->stack_b[0] ^= stack->stack_b[1];
		stack->stack_b[1] ^= stack->stack_b[0];
		stack->stack_b[0] ^= stack->stack_b[1];
		ft_printf("sa\n");
}

void	rb(t_container * stack)
{
	stack->stack_b[0] ^= stack->stack_b[stack->size - 1];
	stack->stack_b[stack->size - 1] ^= stack->stack_b[0];
	stack->stack_b[0] ^= stack->stack_b[stack->size - 1];
}

void	rrb(t_container * stack)
{
	int temp;
	int index;

	temp = stack->stack_b[stack->size - 1];
	index = stack->size;
	while (index--)
		stack->stack_b[index] = stack->stack_b[index - 1];
	stack->stack_b[index + 1] = temp;
	ft_printf("rra\n");
}

void	pb(t_container * stack)
{
	int i;
	
	stack_size(stack);
	if (stack->as == 0)
		return;
	i = stack->bs;
	while (i--)
		stack->stack_b[i + 1] = stack->stack_b[i];
	stack->stack_b[0] = stack->stack_a[0];
	i = -1;
	while (i++ < stack->as)
		stack->stack_a[i] = stack->stack_a[i + 1];
	stack->bs++;
	stack->as--;
	ft_printf("pb\n");
}

