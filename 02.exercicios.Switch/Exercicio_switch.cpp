#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int cod;
	printf("C�digo e Departamentos");
	printf("\n110 Vestuario. ");
	printf("\n215 Eletrodomestico. ");
	printf("\n230 Informatica ");
	printf("\n354 Livraria. ");
	printf("\n412 Esportes. ");
	printf("\nDigite o c�digo do departamento:");
	scanf("%i",&cod);
	
}

