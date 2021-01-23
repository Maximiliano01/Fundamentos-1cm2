#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  
int main(int argc, char** argv) {
    
    FILE *promedio;
    int numero[3];
    int suma;
    float prom=0;
    
    promedio=fopen("datos.txt","wt");
    for(int a=0;a<3;a++){
        printf("calificacion %d :",a+1);
        scanf("%d",& numero[a]);
        suma += numero[a];
        fprintf(promedio,"%d\n", numero[a]);
        
    }
    
    prom=suma/3;
    printf("promedio = %f\n",prom);
    fprintf(promedio,"%f",prom);
    
    

    return (EXIT_SUCCESS);
}