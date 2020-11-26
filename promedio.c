#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
    
    int n=10;
    int x=0;
    int promedio;
    int suma;
    printf("ingrese el numero de datos \n");
    scanf("%d",&n);
    float arreglo [n];
    for(x=0; x<n; x++){
        printf("ingrese valor %d : \n",x+1 );
        scanf("%f",&arreglo[x]);
                      }
    for(x=0; x<n; x++){
        suma += arreglo[x];
                      }
    suma = suma-1;
    promedio = suma/n;
    printf("%d",promedio);
 
  return 0;
}
