#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//calificación aprovatoria

int main(int argc, char** argv) {
  int num;
 
  printf("¿que calificación sacó el chamaco? (0 cancelar): ");
  scanf("%d", &num);
  while (num!=0){
    if (num > 6) printf("%d es aprobatoria\n",num);
    else printf("%d es reprobatoria\n",num);
    printf("seleccione un numero (0 para salir): ");
    scanf("%d", &num);
  }
 
  return 0;
}