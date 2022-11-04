#include <stdio.h>
#include <conio.h>
int main()
{	
	int num;
	int num2;
	num=10;
	printf("********************\n");
	printf("* DIGITE UM NUMERO * \n");
	printf("********************\n");
	scanf ("%d",&num2);
	if (num2==num)
	{
		printf (" PARABENS VOCE ACERTOU =  %d",num2);
	}
	if (num2>num)
	{
		printf (" Voce Errou \n O Numero digitado %d e maior",num2);
	}
	if (num2<num)
	{
		printf (" Voce Errou \n O Numero digitado %d e menor",num2);
	}

}
