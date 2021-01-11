#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t;
	float cf,tcf,ca,tca,tcaz,caz,cac,tcac,tc,tccf,tcca,tccaz,tccac;
	tccf=0;
	tcca=0;
	tccaz=0;
	tccac=0;
	printf ("Elige algo del menú \n1 Frijol $20.00 \n2 Arroz $15.50 \n3 Azúcar $21.00 \n4 Aceite $16.50 \n5 Terminar");
	scanf ("%d",&t);
	do
	{
	     switch (t)
	     {
		case 1:
		printf ("¿Cuánto frijol desea comprar?");
		scanf("%f",&cf);
		tcf=(cf*20)/100;
		tccf=tccf+tcf;
		break;
		case 2:
		printf ("¿Cuánto arroz desea comprar?");
		scanf("%f",&ca);
		tca=(ca*15.50)/100;
		tcca=tcca+tca;
		break;
		  case 3:
		printf ("¿Cuánto azucar desea comprar?");
		scanf("%f",&caz);
		tcaz=(caz*21)/100;
		tccaz=tccaz+tcaz;
		break;
		  case 4:
		printf ("¿Cuánto aceite desea comprar?");
		scanf("%f",&cac);
		tcac=(cac*16.5)/100;
		tccac=tccac+tcac;
		break;
		default:
 		   printf ("Ha terminado su compra");
               }
        printf("Elige algo del menú \n1 Frijol $20.00 \n2 Arroz $15.50 \n3 Azúcar $21.00 \n4 Aceite $16.50 \n5 Terminar");
	scanf ("%d",&t);
	} while (t<5);
	  tc=tccf+tcca+tccaz+tccac;
	  printf ("El total de la compra es %f",tc);
	  return 0;
}