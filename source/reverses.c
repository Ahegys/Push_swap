#include "push_swap.h"

void	swap_rr(int * stack)
{
    printf("%i\n", *stack);
    write(1, "rr\n", 3);
}

void	swap_rra(int * stack)
{
    printf("%i\n", *stack);
    write(1, "rra\n", 3);
}

void	swap_rrb(int * stack)
{
    printf("%i\n", *stack);
    write(1, "rrb\n", 3);
}

void	swap_rrr(int * stack)
{
    printf("%i\n", *stack);
    write(1, "rrr\n", 3);
}