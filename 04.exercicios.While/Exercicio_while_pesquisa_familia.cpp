#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	float filho=0, familia=0, familia2=0;
	float salario=0, maior_sl=0, media_sl, media_fl, tot_f, tot_s, pcnt;
	char resp='S';
	
	while(resp=='S'|| resp=='s')
	{
		printf("Informe o sal�rio:R$");
		scanf("%f", &salario);
		
		printf("\nInforme a quantidade de filhos:");
		scanf("%f", &filho);
		
		printf("\nDeseja cadastrar uma nova fam�lia?");
		scanf("%s", &resp);
		
		
		if(salario > maior_sl)
		{
			maior_sl=salario;
		}
		
		if(salario >=2500)
			{
				familia2++;
			}
		
		tot_s+=salario;
		tot_f+=filho;
		familia++;
	}
		media_sl=tot_s/familia;
		media_fl=tot_f/familia;
		pcnt=(familia2/familia)*100;
		
		printf("\nA m�dia s�larial �: R$%.2f.",media_sl);
		printf("\nA m�dia de filhos � %.2f.",media_fl);
		printf("\nO maior s�lario � : R$%.2f",maior_sl);
		printf("\nA porcentagem de familias que ganham salario acima de R$2500 �:%.2f",pcnt);
		
}

