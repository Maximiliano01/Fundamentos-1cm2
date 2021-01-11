#include <stdio.h>
#include <stdlib.h>

//calculadora de sumas

int main(int argc, char** argv) {
  int num;
  int suma=0;
  int x=0;
  int promedio;
 
  printf("escriba los numeros a promediar.");
  do{
          scanf("%i",&num);
          suma += num;
          if (num!=0)x++;
      }
  while (num != 0);
  promedio = suma/x;
  printf("el promedio es es= %d",promedio);
 
 
  return 0;
}
