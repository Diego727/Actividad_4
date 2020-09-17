#include <stdio.h>
#include <stdlib.h>

int main(){

    char op;

    do{

        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agregar personaje\n");
        printf("0) Salir\n");
        scanf("%c", &op);
        fflush(stdin);

        switch (op)
        {
        case '1':
            break;
        
        case '2':
            break;
        case '3':
            break;
        default:
            break;
        }


    }while (op != '0');
    

    system("\npause");
    return 0;
}