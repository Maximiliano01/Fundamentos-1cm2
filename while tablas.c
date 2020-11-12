

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

  int a = 0; 
  int b = 1;
  int c = 0;


  while (a < 10){
      a = a+1 ;
      b = 1;
      printf("===========\n");
      while(b <= 10){
          c = a * b;
          printf("%d X %d = %d\n",a,b,c);  //esto se lo copie profe xd
          b = b+ 1;
      }
      
              
  } 
 
  return 0;
}
