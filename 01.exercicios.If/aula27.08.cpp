#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float Saldo=500 ,V_compras;
	printf("\n Digite o valor da compra:");
	scanf("%f", &V_compras);
	
	if(V_compras <=Saldo)
	{
		Saldo= Saldo - V_compras;
		printf("\n Opera��o Realizada com sucesso");
		printf("Seu saldo atual � :%.2f", Saldo);
	}

	else
	{
		Saldo= Saldo - V_compras;
		printf("\n Saldo isuficiente");
	}
}
