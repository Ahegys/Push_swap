#include "push_swap.h"

int	validate_stack(int * stack)
{
	int i;

	i = 0;
	while (stack[i])
		i++;
	return (i);
}

void	short_sort(t_container * stack)
{
	if (validate_stack(stack->stack_a) == 2)
		sort_two(stack);
	else
		ft_printf("\n stack not valid!\n");
}
