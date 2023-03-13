#include "../header/push_swap.h"

void	radix(t_container * stack)
{
	int count;
	int i;
	int j;

	i = 0;
	while (i < stack->size)
	{
		j = 0;
		while (stack->stack_a[j])
		{
			count = stack->stack_a[j];
			if (count - i == count)
				ft_printf("%i\n", count);
			else
				ft_printf("makers\n");
			j++;
		}
		i++;
	}
}

