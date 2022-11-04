#include <stdio.h>
#include <conio.h>
int main()
{	
	int num;
	int num2;
	int count;
	num=10;
	for(count=0; count<3; count++)
	{
		printf("\n********************\n");
		printf("* DIGITE UM NUMERO * \n");
		printf("********************\n");
		scanf ("%d",&num2);
		if (num2==num)
		{
			printf (" PARABENS VOCE ACERTOU =  %d\n",num2);
			count =3;
		}
		if (num2>num)
		{
			printf (" Voce Errou \n O Numero digitado %d e maior\n",num2);
		}
		if (num2<num)
		{
			printf (" Voce Errou \n O Numero digitado %d e menor\n",num2);
		}
	}

}
