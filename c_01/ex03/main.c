#include <stdio.h>
#include "ft_div_mod.c"

int	main (void)
{
	int number;
	int number2;
	int	div;
	int	mod;

	number = 12;
	number2 = 3;

	ft_div_mod(number, number2, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);
}
