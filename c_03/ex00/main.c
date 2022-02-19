#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int main (void)
{
	char teste[5] = "abc";
	char teste2[5] = "abc55" ;

	printf("FUNÇÃO PADRÃO\nAlgum caractere da primeira string é menor: %d\n", strcmp(teste, teste2));
	printf("Strings identicas: %d\n", strcmp(teste, teste));
	printf("Algum caractere da primeira string é maior: %d\n\n", strcmp(teste2, teste));
	//Ela compara duas strings caractere por caractere, retornando valores 1, 0 ou -1
	// 0 se as strings forem identicas
	// > 0 se a primeira string tiver qualquer caractere diferente e maior (valor maior via tabela Ascii) do que a segunda string
	// < 0 se a primeira string tiver qualquer caractere diferente e menor (valor menor via Ascii) do que a segunda string
	// Essa função para e retorna a partir do primeiro caractere diferente encontrado, sendo assim, ela não acumula com outros que possam estar diferentes
	// o número retornado é a subtração (numero Ascii) de um com o outro.
	// Por exemplo a(97) - A(65) = 32

	printf("MINHA FUNÇÃO\nAlgum caractere da primeira string é menor: %d\n", ft_strcmp(teste, teste2));
	printf("Strings identicas: %d\n", ft_strcmp(teste, teste));
	printf("Algum caractere da primeira string é maior: %d\n", ft_strcmp(teste2, teste));
}