#include <stdio.h>
#include <stdlib.h>
#include "personaje.h"

void numero(){
    int arreglo[5];
    int i;
    int suma = 0;

    for(i=0; i<5; i++){
        scanf("%d", &arreglo[i]);
    }

    for(i=0; i<5; i++){
        printf("%d ", arreglo[i]);
        
    }

    for(i=0; i<5; i++){
        suma += arreglo[i];
    }

    printf("\nSuma: %d", suma);
    printf("\nPromedio: %.2f\n", suma/5.0);
}

void mostrar(int n, char cadena[]){
    int i;
    for(i=0;i<n;i++){
        printf("%s", cadena);
    }
}

int main(){

    char op;
    char cadena[20];
    int n;

    do{

        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agregar personaje\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        scanf("%c", &op);
        fflush(stdin);

        switch (op)
        {
        case '1':
            numero();
            break;
        
        case '2':
            printf("Escribe la cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("n: ");
            scanf("%i", &n);
            mostrar(n,cadena);

            break;
        case '3':
            capturar_personajes();
            break;
        case '4':
            mostrar_personajes();
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
        

    }while (op != '0');
    
    
    return 0;
}