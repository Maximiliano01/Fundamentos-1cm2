#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int f=8;
   
  int x = 0; 
  int xn = 1;
  int a=1;

  while (a < f){
    printf("%d\n",x);
    printf("%d\n",xn);
    x = x + xn;
    xn = xn + x;
    a = a+2;
  }
 
  return 0;
}