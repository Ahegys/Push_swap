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

void	sort_three(t_container * stack)
{
	int i;

	i = 0;
	while (stack->stack_a[i])
	{
		if (stack->stack_a[0] > stack->stack_a[1])
		{
			stack->stack_a = swap_sa(stack);
			ft_printf("sa\n");
		}
		else if (stack->stack_a[0] > stack->stack_a[2])
		{
			stack->stack_a = swap_rra(stack);
			ft_printf("rra\n");
		}
		else if (stack->stack_a[1] > stack->stack_a[2])
		{
			stack->stack_a = swap_rra(stack);
			ft_printf("rra\n");
		}
		i++;
	}
	print_stack(stack->stack_a);
}
