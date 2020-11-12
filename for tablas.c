

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {

  int a ; 
  int b ;
  int c ;

  for (a=1;a<= 10;a++){
      printf("===========\n");
      for (b=1; b<= 10;b++){
          c = a * b;
          printf("%d X %d = %d\n",a,b,c); 
      }          
  } 
 
  return 0;
}
