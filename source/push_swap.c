#include "push_swap.h"
#define ft_printf printf

int main(int ac, char * av[])
{
    int i;
    int counter;
	int * stack;
    int j;

    j = 0;
    i = 1;
    counter = 1;
    if (ac < 3)
        return (ft_printf("error\n"));
    while (av[counter])
        counter++;
	stack = (int *)ft_calloc(counter, sizeof(int));
    while (av[i])
    {
		stack[j] = ft_atoi(av[i]);
        j++;
        i++;
    }
    stack_a(i, stack);
    return (0);
}
