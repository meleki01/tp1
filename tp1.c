#include <stdio.h>


int main()
{
    int numero, *puntero;
    numero =27;
    puntero=&numero;
    printf("el valor del numero es: %d \n",*puntero);
    printf("la direccion de memoria almacenada por el puntero: %p \n",puntero);
    printf("la direccion de memoria de la variable: %p \n",&numero);
    printf("la direccion de memoria  del puntero: %p \n",&puntero);
    printf("el tamanio de memoria utilizado por la variable: %d \n",sizeof(numero));

    return 0;
}
