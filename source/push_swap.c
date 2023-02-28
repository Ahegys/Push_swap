#include "push_swap.h"
#define ft_printf printf

int main(int ac, char * av[])
{
    int i;
    int counter;
	int * stack;
	t_container	content;

    i = 1;
    counter = 1;
    if (ac < 3)
        return (ft_printf("error\n"));
    while (av[counter])
        counter++;
	stack = (int *)ft_calloc(counter, sizeof(int));
    while (av[i])
    {
		stack[i - 1] = ft_atoi(av[i]);
        i++;
    }
	content.container_a = stack_a(counter, stack);
    return (0);
}
