#include "push_swap.h"

void	selection(int size, t_container * stack)
{
	if (size == 2)
		two(stack);
	else if (size == 3)
			three(stack);
	else
		ft_printf("error in stack!\n");
}
