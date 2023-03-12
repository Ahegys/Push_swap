#include "../header/push_swap.h"

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
	stack->stack_a[stack->size - 1] ^= stack->stack_a[0];
	stack->stack_a[0] ^= stack->stack_a[stack->size - 1];
	ft_printf("ra\n");
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

void	pa(t_container * stack)
{
	int i;
	int temp;

	i = 0;
	stack_size(stack);
	if (stack->bs < 0)
		return;
	else
	{
		temp = stack->stack_b[0];
		while (i++ <= stack->bs)
			stack->stack_b[i] = stack->stack_b[i + 1];
		i = 1;
		while (i++ <= stack->as)
			stack->stack_a[i] = stack->stack_a[i - 1];
		stack->stack_a[0] = temp;
		stack->bs--;
		stack->as++;
	}
}	
