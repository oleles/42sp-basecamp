#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int main (void)
{
	char teste[20] = "abc";
	char teste2[20] = "dfg";
	
	printf("Teste: %s\n", teste);
	printf("Teste2: %s\n\n", teste2);
	
	printf("Original: %s\n",strncat(teste, teste2, 100));

	char teste3[20] = "abc";
	char teste4[20] = "dfg";

	printf("Minha Função: %s\n\n", ft_strncat(teste3, teste4, 100));
}
