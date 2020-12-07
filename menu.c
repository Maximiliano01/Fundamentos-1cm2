#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void convCaF();
void convCaK();
void convFaC();
void convFaK();
void convKaC();
void convKaF();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
   
    do{
        opc = 0;
        system("cmd /c cls");
        printf("\n--Seleccione la opcion deseada:\n");
        printf("1 - Convertir C a F\n");
        printf("2 - Convertir C a K\n");
        printf("3 - Convertir F a C\n");
        printf("4 - Convertir F a K\n");
        printf("5 - Convertir K a C\n");
        printf("6 - Convertir K a F\n");
        printf("7 - Salir\n");
        printf("Seleccion: ");
        scanf("%d",&opc);
        // verifica el opc
        verificar(opc);
    }
    while(opc != 7);
    
      
    return (EXIT_SUCCESS);
}

void verificar (int opc){
    switch (opc){
        case 1 :{
            convCaF();            
            break;
        }
        case 2 :{
            convCaK();
            break;
        }
        case 3 :{
            convFaC();
            break;
        }
        case 4 :{
            convFaK();
            break;
        }
        case 5 :{
            convKaC();
            break;
        }
        case 6 :{
            convKaF();
            break;
        }
        
        case 7 :{
            printf("Salir\n");
            break;
        }
        default:{
            printf("caso defecto\n");
            break;
        }
    }
      
}

void convCaF(){
    printf("\nIngrese los grados C: ");
    float c = 0;
    scanf("%f",&c);
    float f = c * 1.8 + 32;
    printf("\nLos grados F son: %f \n",f);
    system("cmd /c pause");
}

void convCaK(){
    printf("\nIngrese los grados C: ");
    float c = 0;
    scanf("%f",&c);
    float k = c + 273.15;
    printf("\nLos grados K son: %f \n",k);
    system("cmd /c pause");
}
void convFaC(){
    printf("\nIngrese los grados F: ");
    float f = 0;
    scanf("%f",&f);
    float c = ( f - 32 ) / 1.8;
    printf("\nLos grados C son: %f \n",c);
    system("cmd /c pause");
}
void convFaK(){
    printf("\nIngrese los grados F: ");
    float f = 0;
    scanf("%f",&f);
    float c = (( f - 32 ) / 1.8)+273.15;
    printf("\nLos grados C son: %f \n",c);
    system("cmd /c pause");
}
void convKaC(){
    printf("\nIngrese los grados K: ");
    float k = 0;
    scanf("%f",&k);
    float c = k-273.15;
    printf("\nLos grados C son: %f \n",c);
    system("cmd /c pause");
}
void convKaF(){
    printf("\nIngrese los grados K: ");
    float k = 0;
    scanf("%f",&k);
    float f = (k-273.15)* 1.8 + 32;
    printf("\nLos grados C son: %f \n",f);
    system("cmd /c pause");
}