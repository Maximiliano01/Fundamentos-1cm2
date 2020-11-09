        

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
    float x1=2;
    float x2=4;
    float x3=3;
    float x4=6;
    
    if (x1 == x2 == x3 == x4){
        printf("todos son iguales");
    }else{
      if (x1 < x2, x3, x4){
        if (x2 < x1, x3, x4 ){
        if (x3 < x1, x2, x4){
        if (x4 < x1, x2, x3){
        printf("x4 es el mayor");
    }else{
      printf("Esto es imposible :o");  
    }
    }else{
      printf("x3 es mayor");  
    }
    }else{
      printf("x2 es el mayor");  
    }
    }else{
      printf("x1 es mayor");  
    } 
    }
     
    return (0);
}