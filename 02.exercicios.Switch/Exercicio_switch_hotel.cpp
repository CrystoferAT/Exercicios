#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{

	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int cod;
	
	printf("\n############# BEM VINDO AO HOTEL TRANSILVANIA ##############\n");
	printf("\nDigite a op��o desejada:\n");
	printf("\nFazer check-in [1].");
	printf("\nFazer check-out [2].");
	printf("\nChamar servi�o de quarto [3].");
	printf("\nLavanderia [4].");
	printf("\nSolicitar transfer�ncia [5].");
	scanf("%i", &cod);
	switch(cod)
	{
	
		case 1:
			printf("Servi�o desejado : Check-in.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 2:
			printf("Servi�o desejado : Check-out.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 3:
			printf("Servi�o desejado : Servi�o de quarto.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 4:
			printf("Servi�o desejado : Lavanderia.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 5:
			printf("Servi�o desejado : Transf�rencia.");
			printf("\n#################### Obrigado ####################");
		break;
		
		default:
			printf("Op��o invalida.");
			printf("\n#################### Obrigado ####################");
			break;
		
	}
}
