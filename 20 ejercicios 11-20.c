#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tipo,total,extra,can,costo;
    do{
    printf("Ingresa el tipo de telagrama \n");
    printf("\n 1)ordinario");
    printf("\n 2)urgente");
    printf("\n 3)salir\n");
    scanf("%d",&tipo);
    switch(tipo)
    {
        case 1:
        printf("Ingresa el numero de palabras\n");
        scanf("%d",&can);
        extra=can-10;
        if(extra>=1)
        {
            extra=extra*15;
        }
        else
            extra=0;
        costo=100+extra;
        printf("El costo total es %d \n", costo);
        break;
        
        case 2:
        printf("Ingresa el numero de palabras\n");
        scanf("%d",&can);
        extra=can-10;
        if(extra>=1)
        {
            extra=extra*25;
        }
        else
            extra=0;
        costo=200+extra;
        printf("El costo total es %d \n", costo);
        break;
        
        case 3:
         printf("Adios \n");
        
        
    }


    }while(tipo<3);
    

    return 0;
}