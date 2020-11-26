#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
    int n,i,j,aux;
    printf("ingrese el numero de datos \n");
    scanf("%d",&n);
    float array [n];
    for(i=0; i<n; i++){
        printf("ingrese valor %d : \n",i+1 );
        scanf("%f",&array[i]);
                      }
    for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	printf("Numeros de forma Ascendente: ");
	for(i=0;i<5;i++){
		printf("%f , ",array[i]);
	}
	
	printf("\n Numeros de forma desendente: ");
	for(i=4;i>=0;i--){
		printf("%f , ",array[i]);
	}
  return 0;
}
