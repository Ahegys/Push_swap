#include "../header/push_swap.h"
 
void	print_stack(int * stack, int size)
{
	int i;

	i = 0;
	ft_printf("stack: ");
	while(i < size)
	{
		ft_printf("[%i]", *(stack + i));
		i++;
	}
	ft_printf("\n");
}

t_container * fill_in(t_container * stack, int i)
{
	stack->stack_a = ft_calloc(i, sizeof(int *));
	stack->stack_b = ft_calloc(i, sizeof(int *));
	return (stack);
}

t_container * push(t_container * stack, char * num)
{
	stack->stack_a[stack->size] = ft_atoi(num);
	stack->stack_b[0] = 2;
	stack->stack_b[1] = 1;
	stack->size++;
	return (stack);
}

void	stack_size(t_container * stack)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while(stack->stack_a[i])
		i++;
	while(stack->stack_b[j])
		j++;
	stack->as = i;
	stack->bs = j;
}
