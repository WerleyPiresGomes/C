/*	Name: Revisao logica de programacao C
	Copyright: 
	Author: WERLEY PIRES GOMES
	Date: 07/11/22 008:02
	Description: PROGRAMA, ADIVINHACAO DE NUMERO USO DO while 
*/
#include <stdio.h>
#include <conio.h>
int main()
{	
	int num;
	int num2;
	int count;
	int repete;
	num=10;
	repete=1;
	while (repete==1)
	{
		
		
		for(count=0; count<3; count++)
		{
			printf("\n************************************\n");		
			printf("* DIGITE UM NUMERO, TETATIVA %d DE 3 * \n",count+1);
			printf("************************************\n");	
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
		printf (" \n ** GAME OVER ** ");
		printf (" \n ** Jogar novamente digite  0=NAO  1=SIM ** ");
		scanf ("%d",&repete);
	}
}
