#include "push_swap.h"

int main(int ac, char * av[])
{
	t_container stack;
	int i;

	i = 0;
	if (ac < 3)
		return (ft_printf("\n"));
	stack = *init_stack(&stack, av);
	while (stack.stack_a[i])
	{
		ft_printf("[%i]",stack.stack_a[i]);
		i++;
	}
	ft_printf("\nOK\n");
	return (0);
}
