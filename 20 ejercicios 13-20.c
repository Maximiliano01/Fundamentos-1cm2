#include <stdio.h>
#include <stdlib.h>

//calculadora de sumas

int main(int argc, char** argv) {
  int num=1;
  int suma=0;
 
  printf("escriba los numeros a sumar.");
  while (num != 0){
          scanf("%d",&num);
          suma += num;
      }
  suma = suma-1;
  printf("la suma es= %d",suma);
 
 
  return 0;
}
