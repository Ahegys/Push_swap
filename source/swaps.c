#include "push_swap.h"

void  swap_sa(int * swap)
{
    int temp;

    temp = swap[0];
    swap[0] = swap[1];
    swap[1] = swap[0];
    ft_printf("sa\n");
    ft_printf("%i\n", *swap);
}

void	swap_sb(int * swap)
{
    printf("%i\n", *swap);
    write(1, "sb\n", 3);
}

void	swap_ss(int * swap)
{
    printf("%i\n", *swap);
    write(1, "ss\n", 3);
}

void	swap_ra(int * swap)
{
    printf("%i\n", *swap);
    write(1, "ra\n", 3);
}

void	swap_rb(int * swap)
{
    printf("%i\n", *swap);
    write(1, "rb\n", 3);
}
