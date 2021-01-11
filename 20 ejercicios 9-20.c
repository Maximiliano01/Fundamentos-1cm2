#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//la mitad consecutiva de un numero.
int main(int argc, char** argv) {

  float a;
  printf ("escribe un numero (0 para cancelar)");
  scanf("%f",&a);

      while(a != 0){
          a = a / 2; 
          printf("%.2f \n",a);
      }
      
    return 0;           
  } 