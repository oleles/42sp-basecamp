#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int main (void)
{
	char teste[20] = "Teste de Frase";
	char teste2[20] = "de";
	
	printf("Teste: %s\n", teste);
	printf("Teste2: %s\n\n", teste2);
	
	printf("Original: %s\n",ft_strstr(teste, teste2));
	printf("Minha Função: %s\n\n", ft_strstr(teste, teste2));

	printf("Original: %s\n",ft_strstr("padre de padaria", "hoje"));
	printf("Minha Função: %s\n\n", ft_strstr("padre de padaria", "hoje"));

	printf("Original: %s\n",ft_strstr("padre de padaria padra", ""));
	printf("Minha Função: %s\n\n", ft_strstr("padre de padaria padra", ""));
}
