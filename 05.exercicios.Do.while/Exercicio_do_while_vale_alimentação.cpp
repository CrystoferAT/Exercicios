//Considere que um funcion�rio recebe todo inicio de m�s um cr�dito de R$500,00 de
//vale alimenta��o em seu cart�o. Fa�a um programa utilizando a estrutura de repeti��o
//alimenta��o deste funcion�rio.
//repita (do ...while) que ap�s o recebimento do credito controle o saldo do cart�o
//EXERC�CIO
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	float saldo=0, credito=500, gasto=0;
	int resp;
	
	do{
		printf("[1] para mais cr�dito \n [2] para realizar compra\n");
		scanf("%i", &resp);
		if(resp == 1)
			{
			saldo += credito;
			printf("Cr�dito recebido :R$%.2f", credito);
			}
	
		if else(resp == 2)
		{	
			printf("\nSaldo atual:R$%.2f", saldo);
			printf("\nDigite o gasto ou [0] para sair.");
			printf("\nGasto :R$");
			scanf("%f",&gasto);
		}
			if(gasto>saldo)
			{
				printf("\nSaldo insuficiente.");
			}
			if else 
			{
				saldo-=gasto;
				printf("\nSaldo restante:R$%.2f",saldo);
		}
		
	}while(gasto !=0);

}
