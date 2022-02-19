#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main (void)
{
	int a;
	int b;

	a = 9;
	b = 3;

	printf("%d\n", a);
	printf("%d\n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);
}
