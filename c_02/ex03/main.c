#include <stdio.h>
#include "ft_str_is_numeric.c"

int main (void)
{
	char teste[15] = "163578";
	int resultado;

	resultado = ft_str_is_numeric(teste);

	printf("%d\n", resultado);

	printf("Texto: %d\n", ft_str_is_numeric("atesdas"));
	printf("Número com letras: %d\n", ft_str_is_numeric("123ab12"));
	printf("String Vazia: %d\n", ft_str_is_numeric(""));
	printf("Outros caracteres: %d\n", ft_str_is_numeric("Ab@c 123"));
}