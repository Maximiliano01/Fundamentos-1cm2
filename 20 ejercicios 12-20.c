#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Nombres para los arreglos tienen que ser plurales
    int calificaciones[3]; //0, 1, 2; 0 -> tamaño-1
    int opcion = 0;
    int parcial, califNueva;
    // Ciclo que lee todas las calificaciones
    for (int i = 0; i < 3; i++) { //0, 1, 2
        printf("Calificacion #%d: ", i + 1);
        scanf("%d", &calificaciones[i]);
    }

    // Entra en menu
    while (opcion != 4) {
        // Limpia la pantalla
        system("cls");
        // Desplegar opciones
        printf("1.- Consulta todo.\n");
        printf("2.- Consulta parcial.\n");
        printf("3.- Cambio de calificacion.\n");
        printf("4.- Salir.\n");
        // Pedir opcion de usuario
        printf("Opcion: ");
        scanf("%d", &opcion);

        // Determinando funcion
        system("cls");
        switch (opcion) {
            // Consulta todo
            case 1:
                for (int i = 0; i < 3; i++) {
                    printf("Calificacion #%d: %d\n", i + 1, calificaciones[i]);
                }
                break;
            case 2:
                printf("Parcial a consultar: ");
                scanf("%d", &parcial); // 1, 2, 3
                if (parcial > 3 || parcial < 1) {
                    printf("Error: Entrada no valida.\n");
                    break;
                }
                printf("La calificacion del parcial %d es: %d\n", parcial, calificaciones[parcial-1]);
                break;
            case 3:
                // Leyendo parcial
                printf("Parcial a cambiar: ");
                scanf("%d", &parcial); // 1, 2, 3
                if (parcial > 3 || parcial < 1) {
                    printf("Error: Entrada no valida.\n");
                    break;
                }
                // Leyendo calificacion nueva
                printf("Califiacion nueva: ");
                scanf("%d", &califNueva);
                if (califNueva > 10 || califNueva < 0) {
                    printf("Error: Calificacion no valida.\n");
                }
                else {
                    calificaciones[parcial - 1] = califNueva;
                }
                break;
            case 4:
                return 0;
        }
        system("pause");
    }
}