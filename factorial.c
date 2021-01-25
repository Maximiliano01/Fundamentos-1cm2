#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial (int);  

int main(int argc, char** argv) {
    int num;
    printf("ingrese un numero;");
    scanf("%d",&num);
    printf ("el factorial de %d es de %d",num,factorial(num));
    return (EXIT_SUCCESS);
}

int factorial(int num){
    if(num==0){
        num=1;
    }else{
        num = num * factorial (num-1);
    }
    return(num);
}