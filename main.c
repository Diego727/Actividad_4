#include <stdio.h>
#include <stdlib.h>

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
            numero();
            break;
        
        case '2':
            break;
        case '3':
            break;
        default:
            break;
        }
        system("\npause");
        system("cls");
        

    }while (op != '0');
    
    
    return 0;
}