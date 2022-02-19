#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int main (void)
{
	//strcpy(char *dest, const char *src);

	char teste1[15] = "Teste 1 Ab@!";
	char teste2[15];

	
	printf("Saída Função Criada\n");
	ft_strcpy(teste2, teste1);

	printf("Cópia: %s\n", teste2);
	printf("STR Copiada: %s\n\n", teste1);
	
	printf("Saída Original\n");
	strcpy(teste2, teste1);

	printf("Cópia: %s\n", teste2);
	printf("STR Copiada: %s\n", teste1);
}