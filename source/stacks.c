#include "push_swap.h"

int	* stack_a(int size, int * nbr)
{
	t_func  make;

	make = init();
	int * stack;
	int	i;

	i = 0;
	stack = (int *)ft_calloc(size, sizeof(int));
	
	while (nbr[i])
	{
		stack[i] = nbr[i];
		printf("%i\n", nbr[i]);
		i++;
	}
	make.sa(stack);
	return (stack);
}

	int * stack_b(int size, int * nbr)
{
	t_func make;

	make = init();
	int * stack;
	int	i;

	i = 0;
	stack = (int *)ft_calloc(size, sizeof(int));
	
	while (stack[i])
	{
		stack[i] = nbr[i];
		i++;
	}
	make.sa(stack);
	return (stack);
}
