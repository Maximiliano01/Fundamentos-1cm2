#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//wi el numero es negativo o positivo

int main(int argc, char** argv) {
  int num;
 
  printf("seleccione un numero (0 cancelar): ");
  scanf("%d", &num);
  while (num!=0){
    if (num > 0) printf("%d, positivo\n",num);
    else printf("%d, negativo\n",num);
    printf("seleccione un numero (0 para salir): ");
    scanf("%d", &num);
  }
 
  return 0;
}