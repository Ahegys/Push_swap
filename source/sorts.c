#include "push_swap.h"

void	sort_two(t_container * stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
	{
		swap_sa(stack);
		ft_printf("sa\n");
	}
	print_stack(stack->stack_a);
}
