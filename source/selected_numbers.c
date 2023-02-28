#include "push_swap.h"

void	two_numbers()
{
	ft_printf("two numbers\n");
}
void	three_numbers()
{
	ft_printf("three numbers\n");
}
void	four_numbers()
{
	ft_printf("four numbers\n");
}
void	five_numbers()
{
	ft_printf("five numbers\n");
}

void	one_hundred()
{
	ft_printf("one hundred\n");
}
void	five_hundred()
{
	ft_printf("five hundred\n");
}

void	exec_selection(int counter)
{
	if (counter == 2)
		two_numbers();
	else if (counter == 3)
		three_numbers();
	else if (counter == 4)
		four_numbers();
	else if (counter == 5)
		five_numbers();
	else if (counter == 100)
		one_hundred();
	else if (counter == 500)
		five_hundred();
}