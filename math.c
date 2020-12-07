#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    double x=4;
    double y=3;
    printf("la raiz es %.2f\n",sqrt(x));
    printf("la funcion exponencial es %.2f\n",exp(x));
    printf("el logaritmo natural en base e es %.2f\n",log (x));
    printf("el logaritmo natural en base 10 es %.2f\n",log10 (x));
    printf("el valor absoluto es %.2f\n",abs (x));
    printf("redondeado al mas pequeño es %.2f\n",ceil (x));
    printf("redondeado al mas grande es %.2f\n",floor (x));
    printf("el logaritmo natural en base e es %.2f\n",log (x));
    printf("elevado a la potencia de y es %.2f\n",pow (x,y));
    //printf("el residuo como numero flotante es %.2f\n",fmocH(x,y));
    printf("el seno es %.2f\n",sin (x));
    printf("el coseno es %.2f\n",cos (x));
    printf("la tangente es %.2f\n",tan (x));
    
      return 0;
}