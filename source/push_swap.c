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
	stack.stack_a = ft_calloc(j, sizeof(int *));
	stack.stack_b = ft_calloc(j, sizeof(int *));
	i = 1;
	while (av[i])
	{
		stack.stack_a[j] = ft_atoi(av[i]);
		j++;
		i++;
	}
	swap_sa(&stack);
	ft_printf("OK\n");
	return (0);
}
