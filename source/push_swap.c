#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ft_printf printf

int main(int ac, char * av[])
{
    int i;

    i = 1;
    if (ac < 3)
        return (ft_printf("error\n"));
    while (av[i])
    {
		stack_a(ft_atoi(av[i]));
        i++;
    }
    return (0);
}
