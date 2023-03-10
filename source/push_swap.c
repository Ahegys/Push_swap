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
	print_stack(stack.stack_a, stack.size);
	selection(stack.size, &stack);
	print_stack(stack.stack_a, stack.size);
	ft_printf("OK\n");
	return (0);
}
