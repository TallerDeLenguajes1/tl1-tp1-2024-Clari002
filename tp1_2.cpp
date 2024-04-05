#include <stdio.h>


int funcCuadradoDeNum(int x);
void procedimientoCuadrado(int valor);


int main()
{
    //consigna 1
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    int cuadrado = funcCuadradoDeNum(num);
    printf("El cuadrado de %d es: %d", num, cuadrado);
    
    //consigna 2
    int num2;
    printf("\nIngrese un numero: ");
    scanf("%d", &num2);
    procedimientoCuadrado(num2);

    return 0; 
}

int funcCuadradoDeNum(int x)
{
    return(x*x);
}


void procedimientoCuadrado(int valor)
{
    int cuadrado = valor * valor;
    printf("El cuadrado de %d es: %d", valor, cuadrado);
}

