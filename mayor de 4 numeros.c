        

//encabezados
#include <stdio.h>
#include <stdlib.h>
// definicion y prototipo de funciones


//variables y constantes



//implementacion de funciones

int main(int argc, char** argv) {
    //declarar e imiciar variables
    //variable (programacion]: espacio de memoria se manipula con un identidad (identificador]
    //declarando una variable
    float x1=1;
    float x2=1;
    float x3=1;
    float x4=1;
    
    if (x1>x2 && x1>x3 && x1>x4){
        printf("x1 es mas grande");
    }else if (x2>x1 && x2>x3 && x2>x4) {
      printf("x2 es mayor");  
    } else if (x3>x1 && x3>x2 && x3>x4){
        printf("x3 es el mayor");
    }else if (x4>x1 && x4>x3 && x4>x3){
        printf ("x4 es el mayor");
    } else printf("todos son iguales");
     
    return (0);
}