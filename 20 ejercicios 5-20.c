#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//las tablas de un numero a la elección.

int main(int argc, char** argv) {

  int a ; 
  int b ;
  int c ;

  printf("escriba el numero que quiere multiplicar:");
  scanf("%d",&a);
      for (b=1; b<= 10;b++){
          c = a * b;
          printf("%d X %d = %d\n",a,b,c); 
      } 
  return 0;
  } 
