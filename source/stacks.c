#include "push_swap.h"

void	stack_a(int *nbr)
{
	int * stack;
	int	i;

	i = 0;
	stack = (int *)ft_calloc(sizeof(int *));
	
	while (nbr[i])
	{
		stack[i] = nbr[i];
		i++;
	}
}

void	stack_b(int *nbr)
{
	int * stack;
	int	i;

	i = 0;
	stack = (int *)ft_calloc(sizeof(int *));
	
	while (nbr[i])
	{
		stack[i] = str[i];
		i++;
	}
}
