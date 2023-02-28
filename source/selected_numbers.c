#include "push_swap.h"

int	two_numbers()
{
	return (ft_printf("two numbers\n"));
}
int	three_numbers()
{
	return ft_printf("three numbers\n");
}
int	four_numbers()
{
	return ft_printf("four numbers\n");
}
int	five_numbers()
{
	return ft_printf("five numbers\n");
}

int	one_hundred()
{
	return ft_printf("one hundred\n");
}
int	five_hundred()
{
	return ft_printf("five hundred\n");
}

int	(*exec_selection(int counter))()
{
	if (counter == 2)
		return (two_numbers);
	else if (counter == 3)
		return (three_numbers);
	else if (counter == 4)
		return (four_numbers);
	else if (counter == 5)
		return (five_numbers);
	else if (counter == 100)
		return (one_hundred);
	else if (counter == 500)
		return (five_hundred);
	else
		return (five_hundred);
}