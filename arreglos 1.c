#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
    
    int a=0;
    int b=1;
    int arreglo [100];
    arreglo[a] = 2;
    arreglo[b] = 3;
    int x=0;

  for (x=0;x<= 100;x++){
      printf("%ld\n",arreglo [a]);
      printf("%ld\n", arreglo [b]);
      arreglo [a] = arreglo[a] + arreglo[b];
      arreglo [b]= arreglo[a] + arreglo[b];

               
  } 
 
  return 0;
}
