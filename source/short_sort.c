#include "push_swap.h"

void	short_sort(t_container * stack, int size)
{
	if (size == 2)
		sort_two(stack);
	else if (size == 3)
		sort_three(stack);
	else if (size == 4)
			sort_four(stack);
	else
		ft_printf("\n stack not valid!\n");
}
