/*AGENDA ALANA*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int semana, bairro;
	printf ("   \n\n 02 - SEGUNDA FEIRA ");
	printf ("   \n\n 03 - TERCA FEIRA ");
	printf ("   \n\n 04 - QUARTA FEIRA ");
	printf ("   \n\n 05 - QUINTA FEIRA ");
	printf ("   \n\n 06 - SEXTA FEIRA \n\n ");
	printf ("   \n SELECIONE O DIA DA SEMANA   ");			
	scanf ("%d",&semana);
	if (semana>1 and semana <6) 
	{
		system("cls"); 
		printf("|-----------------------------------------------------------------------------|\n");
		printf("|                                BAIRROS                                      |\n");
		printf("|------------|-------------|---------------|--------------|-------------------|\n");
		printf("|  CENTRO    | NORTE       | OESTE         |  LESTE       |   SUL             |\n");
		printf("|------------|-------------|---------------|--------------|-------------------|\n");
		printf("|01-CENTRO   |12-ROOSEVELT |23-JARAGUA     |40-S.MONICA   |57-TUBALINA        |\n");
		printf("|02-FUNDINHO |13-J.BRASILIA|24-PLANALTO    |41-TIBERY     |58-CIDADE JARDIM   |\n");
		printf("|03-APARECIDA|14-S.JOSE    |25-C.TUBALINA  |42-SEGISMUNDO |59-NOVA UBERLANDIA |\n");
		printf("|04-MARTINS  |15-M.HELENA  |26-C.PANORAMA  |43-UMUARAMA   |60-PATRIMONIO      |\n");
		printf("|05-O.REZENDE|16-PACAEMBU  |27-LUIZOTE     |44-C.PEREIRA  |61-MORADA DA COLINA|\n");
		printf("|06-BOM JESUS|17-SANTA ROSA|28-J.PALMENIRAS|45-ACLIMACAO  |62-VIGILATO PEREIRA|\n");
		printf("|07-BRASIL   |18-GRAMADO   |29-J.EUROPA    |46-M.AEROPORTO|63-SARAIVA         |\n");
		printf("|08-CAZECA   |19-N.S GRACAS|30-CANAA       |47-ALVORADA   |64-LAGOINHA        |\n");
		printf("|09-LIDICE   |20-M.GERAIS  |31-MANSOUR     |48-NOVO MUNDO |65-CARAJAS         |\n");
		printf("|10-D.FONSECA|21-INDUSTRIAL|32-D.ZUMIRA    |49-MORUMBI    |66-PAMPULHA        |\n");
		printf("|11-TABAJARAS|22-MARAVILHA |33-TAIAMAN     |50-INTEGRAÇÃO |67-KARAIBA         |\n");
		printf("|--------------------------|34- GUARANI    |52- M.PASSAROS|68-J.INCONFIDENCIA |\n");
		printf("|     DISTRITOS            |35- TOCANTINS  |53- IPANEMA   |69-SANTA LUZIA     |\n");
		printf("|--------------------------|36- M.DO SOL   |54- P. VALE   |70-GRANADA         |\n");
		printf("|77-MARTINESIA             |37- M. HEBRON  |55 G.MARILEUSA|71-SAO JORGE       |\n");
		printf("|78-TAPUIRAMA              |38- PEQUIS     |56 GRAND VILLE|72-LARANJEIRAS     |\n");
		printf("|79-MIRAPORANGA            |39- MORADA NOVA|              |73-SHOPPING PARK   |\n");
		printf("|80-MIRANDA                |               |              |74-JARDIM SUL      |\n");
		printf("|81-CRUZEIRO DOS PEIXOTOS  |               |              |75-GAVEA           |\n");
		printf("|--------------------------|---------------|--------------|-------------------|\n");
		printf("\n\n SELECIONE O BAIRRO     ");		
		scanf ("%d",&bairro);
		switch ( semana )
  		{	
        	case 2 :   	 	
   	 			if ( (bairro==33)or(bairro==34)or(bairro==35)or(bairro==19))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR FABIO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");   	 
				}
   	 			else
				if ( (bairro==12)or(bairro==16)or(bairro==22) or (bairro==13)or(bairro==34))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  	 
				}
				else 
				if ( (bairro==12)or(bairro==15)or(bairro==18) or (bairro==19)or(bairro==20)or(bairro==21)or(bairro==17))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR MILTON: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
				}
			
   	 			else
   	 			{
					system("cls");
					printf("\n\n\n\n\n\n\n	NAO LOCALIZADO LIGAR PARA REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
			break;
		
    		case 3 :   	 	
   	 			if ( (bairro==01)or(bairro==30)or(bairro==28) or (bairro==59)or(bairro==57)or(bairro==58))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR FABIO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");   	 
				}
   	 			else
				if ( (bairro==24)or(bairro==28)or(bairro==30) or (bairro==37)or(bairro==38)or (bairro==39))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  	 
				}
				else 
				if ( (bairro==12)or(bairro==15)or(bairro==18) or (bairro==19)or(bairro==20)or(bairro==21)or(bairro==17))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR MILTON: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
				}
			
   	 			else
   	 			{
					system("cls");
					printf("\n\n\n\n\n\n\n	NAO LOCALIZADO LIGAR PARA REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
			break;
    	
    
    		case 4 :
    			if ( (bairro==01)or(bairro==30)or(bairro==28) or (bairro==59)or(bairro==57)or(bairro==58))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR FABIO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");   	 
				}
   	 			else
				if ( (bairro==24)or(bairro==28)or(bairro==30) or (bairro==37)or(bairro==38)or (bairro==39))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  	 
				}
				else 
				if ( (bairro==12)or(bairro==15)or(bairro==18) or (bairro==19)or(bairro==20)or(bairro==21)or(bairro==17))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR MILTON: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
				}
			
   	 			else
   	 			{
					system("cls");
				    printf("\n\n\n\n\n\n\n	NAO LOCALIZADO LIGAR PARA REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
    		break;
    
    		case 5 :
    			if ( (bairro==01)or(bairro==30)or(bairro==28) or (bairro==59)or(bairro==57)or(bairro==58))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR FABIO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");   	 
				}
   	 			else
				if ( (bairro==24)or(bairro==28)or(bairro==30) or (bairro==37)or(bairro==38)or (bairro==39))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  	 
				}
				else 
				if ( (bairro==12)or(bairro==15)or(bairro==18) or (bairro==19)or(bairro==20)or(bairro==21)or(bairro==17))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR MILTON: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
				}
			
   	 			else
   	 			{
					system("cls");
				    printf("\n\n\n\n\n\n\n	NAO LOCALIZADO LIGAR PARA REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
    		break;
    
    		case 6 :
    			if ( (bairro==01)or(bairro==30)or(bairro==28) or (bairro==59)or(bairro==57)or(bairro==58))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR FABIO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");   	 
				}
   	 			else
				if ( (bairro==24)or(bairro==28)or(bairro==30) or (bairro==37)or(bairro==38)or (bairro==39))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  	 
				}
				else 
				if ( (bairro==12)or(bairro==15)or(bairro==18) or (bairro==19)or(bairro==20)or(bairro==21)or(bairro==17))
   	 			{
   	 				system("cls"); 
   	 				printf("\n\n\n\n\n\n\n	SUPERVISOR MILTON: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
				}
			
   	 			else
   	 			{
					system("cls");
				    printf("\n\n\n\n\n\n\n	NAO LOCALIZADO LIGAR PARA REGINALDO: 988579024 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
    		break;
    
        
    		default :
    			printf("\n\n\n\n\n\n\n    INVALIDO \n\n\n\n\n\n\n\n\n\n");
  		}
  
	}
	else 
	{
		printf("\n\n\n\n\n\n\n    INVALIDO \n\n\n\n\n\n\n\n\n\n");
   }
   	system("pause");
	return 0;
   
}
