#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int main (void)
{
	char frase[]="	 ---+--+12c34567";
	//char frase[]="---1234567";
	//int	valor;
	
	//valor = atoi(frase);

	printf("MINHA: %d", ft_atoi(frase));

	//printf("ORIGINAL: %d", valor);

	//printf("MINHA: %s", frase);
}