#include <stdio.h>
#include "ft_str_is_alpha.c"

int main (void)
{
	char teste[15] = "Testando";
	int resultado;

	resultado = ft_str_is_alpha(teste);

	printf("Apenas Texto: %d\n", resultado);

	printf("Números: %d\n", ft_str_is_alpha("123"));
	printf("String Vazia: %d\n", ft_str_is_alpha(""));
	printf("Outros caracteres: %d\n", ft_str_is_alpha("Ab@c 123"));
}