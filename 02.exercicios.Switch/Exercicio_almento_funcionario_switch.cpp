#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
/* Os funcion�rios de uma empresa receberam um aumento de sal�rio:
? t�cnicos (c�digo = 1), 50%;
? gerentes (c�digo = 2), 30%;
? demais funcion�rios (c�digo = 3), 20%.
Escrever um algoritmo para ler o c�digo do cargo de um funcion�rio e o valor do seu sal�rio atual, calcular e
imprimir o novo sal�rio ap�s o aumento.*/
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int cod;
	float slr,amt, tot;
	
	printf("Digite o c�digo do funcion�rio:");
	printf("\nT�cnicos [1].");
	printf("\nGerentes [2].");
	printf("\nDemais funcion�rios [3]\n");
	scanf("%i", &cod);
	printf("\nDigite o sal�rio :R$");
	scanf("%f", &slr);
	
	switch(cod)
	{
		case 1:
			amt=slr*0.5;
			tot=slr+amt;
			printf("\n Novo sal�rio �:R$%.2f.", tot);
			break;
		case 2:
			amt=slr*0.3;
			tot=slr+amt;
			printf("\n Novo sal�rio �:R$%.2f.", tot);	
			break;
		case 3:
			amt=slr*0.2;
			tot=slr+amt;
			printf("\n Novo sal�rio �:R$%.2f.", tot);
			break;
			
	}
}
