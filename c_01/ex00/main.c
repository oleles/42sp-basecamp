#include <stdio.h>
#include "ft_ft.c"

int main (void)
{
	
	int number;
	int *ptr;

	number = 2;
	ptr = &number;
	/*
	number = 42;
	ptr = &number; //& recupera o endereço da variavel
	printf("%p\n", ptr); // Aqui exibe o endereço da variável armazenada no ponteiro
	printf("%d\n", *ptr); //Aqui exibe o conteúdo que está dentro do endereço que o ponteiro armazenou

	*ptr = 21;
	printf("%d\n", number); //Aqui exibe o novo valor de number, que foi alterado acima diretamente pelo ponteiro que possui o seu endereço
	*/

	ft_ft(ptr);

	printf("%d\n", number);

}