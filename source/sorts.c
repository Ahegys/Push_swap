#include "../header/push_swap.h"

int sorted(t_container *stack)
{
	int i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
   return 1;
}

void	selection(int size, t_container * stack)
{
	if (size == 2)
		two(stack);
	else if (size == 3)
			three(stack);
	else if (size == 4)
			four(stack);
	else
		ft_printf("error in stack!\n");
}
