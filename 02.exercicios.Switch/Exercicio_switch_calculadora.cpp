#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	 
	 float tot, n1, n2;
	 char op;
	 
	 printf("######### CALCULADORA ##########\n");
	 printf("Digite um numero inteiro: ");
	 scanf("%f", &n1);
	 printf("\nDigite outro numero inteiro: ");
	 scanf("%f", &n2);
	 printf("\n ##### ESCOLHA A OPERA��O DESEJADA ##########\n");
	 printf("\n+ para adi��o");
	 printf("\n- para subtra��o");
	 printf("\n* para multiplica��o");
	 printf("\n/para divis�o\n");
	 scanf(" %c", &op);
	 
printf("\n\n ############################################\n\n");
switch(op)
{
		case '+':
			tot=n1+n2;
			printf("\nResultado da Opera��o � %.2f", tot);
			break;
			
		case '-':
			tot=n1-n2;
			printf("\nResultado da Opera��o � %.2f", tot);
			break;
			
		case '*':
			tot=n1*n2;
			printf("\nResultado da Opera��o � %.2f", tot);
			break;
			
		case '/':
			if(n2==0)
			{
			printf("O valor n�o � divisivel por zero .");
			}
			else
			{
			tot=(n1/n2);
			printf("Total :%.2f", tot);
			break;
			}
			default: 
			printf("\n	Opera��o Inv�lida!");
			break;
			
			}
}
	

