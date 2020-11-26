#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
    
    int n=10;
    int x=0;
    printf("ingrese el numero de datos \n");
    scanf("%d",&n);
    float arreglo [n];
    for(x=0; x<n; x++){
        printf("ingrese valor %d : \n",x+1 );
        scanf("%f",&arreglo[x]);
                      }
    x=0;
    float min= arreglo[x];
    float max= arreglo[x];
    for(x;x<n;x++){
        if (arreglo [x]<min){
            min = arreglo [x];
        }
        if (arreglo [x]>max){
            max = arreglo [x];
        }
    }
    printf("el valor minimo es de \n %f \n", min);
    printf("el valor maximo es de \n %f", max);
 
  return 0;
}

