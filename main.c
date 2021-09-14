#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
const ESC=27;
/// Sumar los elementos de una pila
int main()
{
    Pila dada,aux;
    int total=0;
    inicPila(&dada);
    inicPila(&aux);
    char control;

    do
    {
        printf("Ingrese un valor para la pila Dada \n");
        leer(&dada);
        printf("ESC para salir, presione cualquier tecla para continuar \n");
        control=getch();
        system("cls");
    }
    while(control!=ESC);

    printf("Pila Dada cargada \n");
    mostrar(&dada);

    while(!pilavacia(&dada))
    {
        total=total+tope(&dada);
        apilar(&aux, desapilar(&dada));
    }

    while(!pilavacia(&aux))
    {
        apilar(&dada, desapilar(&aux));
    }

    printf("La suma de la pila Dada es de : %d \n",total);

    printf("Pila Dada \n");
    mostrar(&dada);


    return 0;
}

