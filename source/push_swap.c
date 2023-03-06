#include "push_swap.h"

int main(int ac, char * av[])
{
	t_container stack;

	if (ac < 3)
		return (ft_printf("\n"));
	stack = *init_stack(&stack, av);
	short_sort(&stack);
	ft_printf("\nOK\n");
	return (0);
}
