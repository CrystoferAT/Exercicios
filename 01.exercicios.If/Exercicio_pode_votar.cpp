#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	system("color 0b");
	setlocale(LC_ALL,"PORTUGUESE");
	int idade;
	printf("\n Digite sua idade:");
	scanf("%i",&idade);
	
	if ((idade>=16 && idade<18)||idade>=70)
	{
		printf("\n Voc� ja pode votar.");
		printf("\n Por�m n�o � obrigat�rio.");
	}
	if(idade<16)
	{
		printf("Voce ainda n�o pode votar demenor");
	}
	else
	{
		printf("\n Voc� � obrigado a votar ot�rio.");
	}
}
