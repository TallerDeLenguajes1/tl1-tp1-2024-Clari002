#include <stdio.h>

int main()
{
    printf("Hola mundo");

    int a = 3;
    int *punt;
    punt = &a;
    printf("direccion de a: %p\n", punt);
    printf("valor de a: %d\n",*punt);
    printf("direccion de memoria de a: %p\n", &a);
    printf("direccion de memoria del puntero: %p\n", &punt);
    printf("Tamaño de la memoria usada: %lu", sizeof(a));
    return 0;
}