#include "push_swap.h"

int *swap_sa(int *swap)
{
    int temp;

    temp = swap[0];
    swap[0] = swap[1];
    swap[1] = temp;
	while (*swap)
		ft_printf("%i", *(swap++));
	return (swap);
}

int *swap_sb(int *swap)
{
    int temp;

	temp = swap[0];
	swap[0] = swap[1];
	swap[1] = temp;
    return (swap);
}

int	*swap_ss(int * swap_a, int * swap_b)
{
	ft_printf("%i", *swap_b);
	write(1, "ss\n", 3);
	return (swap_a);
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
