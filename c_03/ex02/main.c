#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int main (void)
{
	char teste[20] = "ABC D 8";
	char teste2[20] = "DFG";
	
	printf("Teste: %s\n", teste);
	printf("Teste2: %s\n\n", teste2);
	
	
	//printf("Original: %s\n",strcat(teste, teste2));

	printf("Minha Função: %s\n\n", ft_strcat(teste, teste2));
}
