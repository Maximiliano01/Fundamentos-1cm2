#include <stdio.h>
#include <stdlib.h>

//mayor de numeros seleccionados

int main(int argc, char** argv) {

  int a;
  int m =0;
  
  do{
      printf("coloque un numero(0 para calcular)");
      scanf("%d",&a);
      if (m<a) m=a;
      
  }while (a!=0);
  printf ("mayor es %d",m);
      
    return 0;           
  } 