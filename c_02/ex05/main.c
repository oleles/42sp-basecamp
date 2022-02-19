#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main (void)
{
	char teste[15] = "TESTE";
	int resultado;

	resultado = ft_str_is_uppercase(teste);

	printf("%d\n", resultado);

	printf("Texto misturado: %d\n", ft_str_is_uppercase("aAaASDeas"));
	printf("Número com letras: %d\n", ft_str_is_uppercase("1ab12"));
	printf("String Vazia: %d\n", ft_str_is_uppercase(""));
	printf("Outros caracteres: %d\n", ft_str_is_uppercase("a!b@c 123"));
}