#include "push_swap.h"

int main(int ac, char * av[])
{
	int i;
	int j;
	t_container stack;

	j = 0;
	if (ac < 3)
		return (ft_printf("\n"));
	i = 1;
	while (av[i])
		i++;
	stack.stack_a = ft_calloc(i, sizeof(int *));
	stack.stack_b = ft_calloc(i, sizeof(int *));
	i = 1;
	while (av[i])
	{
		stack.stack_a[j] = ft_atoi(av[i]);
		j++;
		i++;
	}
	ft_printf("view stack values is swap stack_a [%i] [%i]\n",stack.stack_a[0], stack.stack_a[1]);
	stack.stack_a = swap_sa(&stack);
	ft_printf("view stack values is swap stack_a [%i] [%i]\n",stack.stack_a[0], stack.stack_a[1]);
	return (0);
}
