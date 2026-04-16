#include <stdio.h>


void mostrar(int *numero, int **direccion, int *puntero){
    printf("el numero es %d \n",*numero);
    printf("La direccion en memoria de la variable es: %p \n", numero);
    printf("La direccion en memoria almacenada por el puntero es: %p \n", puntero);
    printf("La direccion de memoria del puntero es: %p \n", direccion);
    printf("el tamaño utilizado por la variable es: %d \n", sizeof(*numero));
}

int main()
{
    printf("hola mundo");
    int *puntero ,numero=0;
    numero = 27;
    puntero= &numero;
    mostrar(&numero, &puntero, puntero);
    return 0;
}
