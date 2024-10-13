#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

int main()
{
      float area , raio;
      printf ("\n Informe o raio :");
      scanf("%f", &raio);
      area=3.14*pow(raio,2);
      printf("\nA area de circunferência é : %.2f", area);
      
    
}
