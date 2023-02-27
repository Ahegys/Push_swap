#include "push_swap.h"

void	swap_pa(int * stack)
{
    printf("%i\n", *stack);
    write(1, "pa\n", 3);
}

void	swap_pb(int * stack)
{
    printf("%i\n", *stack);
    write(1, "pb\n", 3);
}
