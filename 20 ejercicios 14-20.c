
#include <stdio.h>
#include <stdlib.h>

//calculadora de sumas

int main(int argc, char** argv) {
  int num;
  int suma=0;
 
  printf("escriba los numeros a sumar.");
  do{
          scanf("%i",&num);
          suma += num;
      }
  while (num != 0);
  printf("la suma es= %d",suma);
 
 
  return 0;
}
