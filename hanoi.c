#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hanoi (int,int,int,int);  

int main(int argc, char** argv) {
    int discos=0;
    int torreA = 1;
    int torreB = 2;
    int torreC = 3;
    
    printf("ingrese los discos que desea utilizar");
    scanf("%d",&discos);
    hanoi(discos,torreA,torreB,torreC);
    return (EXIT_SUCCESS);
}

void hanoi (int discos,int torreA,int torreB,int torreC){
    if(discos==1){
        printf("mueva %d a disco %d \n",torreA,torreC);
    }else{
        hanoi(discos-1,torreA,torreC,torreB);
        printf("mueva disco %d a disco %d \n",torreA, torreC);
        hanoi(discos-1,torreB,torreA,torreC);
    }
   
}