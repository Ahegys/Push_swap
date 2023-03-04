#include "push_swap.h"

t_container * swap_pa(t_container * stack)
{
	int i;
	int * cont_a;
	int * cont_b;
	int j;

	i = 0;
	while (stack->stack_a[i])
		i++;
	cont_a = ft_calloc(i + 2, sizeof(int *));
	cont_a[0] = stack->stack_b[0];
	j = 0;
	i = 1;
	while (stack->stack_a[j])
	{
		cont_a[i] = stack->stack_a[j];
		j++;
		i++;
	}
	i = 0;
	while (stack->stack_b[i])
		i++;
	cont_b = ft_calloc(i - 1, sizeof(int *));
	i = 1;
	j = 0;
	while (stack->stack_b[i])
	{
		cont_b[j] = stack->stack_b[i];
		j++;
		i++;
	}
	i = 0;
	while (cont_a[i])
	{
		ft_printf("a = [%i]", cont_a[i]);
		i++;
	}
	stack->stack_a = cont_a;
	stack->stack_b = cont_b;
	return (stack);
}

t_container * swap_pb(t_container * stack)
{
	int i;
	int * cont_a;
	int * cont_b;
	int j;

	i = 0;
	while (stack->stack_b[i])
		i++;
	cont_b = ft_calloc(i + 2, sizeof(int *));
	cont_b[0] = stack->stack_a[0];
	j = 0;
	i = 1;
	while (stack->stack_b[j])
	{
		cont_b[i] = stack->stack_b[j];
		j++;
		i++;
	}
	i = 0;
	while (stack->stack_b[i])
		i++;
	cont_a = ft_calloc(i - 1, sizeof(int *));
	i = 1;
	j = 0;
	while (stack->stack_a[i])
	{
		cont_a[j] = stack->stack_a[i];
		j++;
		i++;
	}
	i = 0;
	while (cont_b[i])
	{
		ft_printf("b = [%i]", cont_b[i]);
		i++;
	}
	stack->stack_a = cont_a;
	stack->stack_b = cont_b;
	return (stack);
}
