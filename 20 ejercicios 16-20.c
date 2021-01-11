#include <stdio.h>
#include <stdlib.h>

//el triple de un numero

int main(int argc, char** argv) {

  int a;
  scanf("%d",&a);
  int b=0;

      while(b <= 10){
          a = a * 3; 
          printf("%d \n",a);
          b=b+1;
      }
      
    return 0;           
  } 

