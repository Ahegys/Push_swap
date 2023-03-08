#include "push_swap.h"

int main(int ac, char * av[])
{
	t_container stack;
	int i;

	i = 1;
	if (ac < 3)
		return (ft_printf("\n"));
	stack = *fill_in(&stack, ac - 1);
	stack.size = 0;
	while (av[i])
	{
		stack = *push(&stack,av[i]);
		i++;
	}
	short_sort(&stack, ac - 1);
	print_stack(stack.stack_a, ac - 1);
	ft_printf("\nOK\n");
	return (0);
}
