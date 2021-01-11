#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//tablas del 1 al 5

int main(int argc, char** argv) {

  int a ; 
  int b ;
  int c ;

  for (a=1;a<= 5;a++){
      printf("===========\n");
      for (b=1; b<= 10;b++){
          c = a * b;
          printf("%d X %d = %d\n",a,b,c); 
      }          
  } 
 
  return 0;
}
 