#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("\n%d� � %i",i+1 ,i+1);
	}
	
}
