#include <stdio.h>
#include <stdlib.h>
#include <string.h>//este es necesario

  
int main(int argc, char** argv) {
    
    char cadena[5]="HELLO";
    int i;
    for(i=0;i<strlen(cadena);i++){
        printf("%c\n",cadena[i]);
    }
    printf("%s",cadena);
    
    
    
    return (EXIT_SUCCESS);
}