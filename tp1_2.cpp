#include <stdio.h>
#include <stdio.h>

int funcCuadradoDeNum(int x);
void procedimientoCuadrado(int * valor);


int main()
{
    //consigna 1
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    int cuadrado = funcCuadradoDeNum(num);
    printf("El cuadrado de %d es: %d", num, cuadrado);
    
    //cinsigna 2
   int num2;
   int *puntero;
   puntero = &num2;
   printf("\nIngrese un numero: ");
   scanf("%d", &num2);
   int aux = num2;

   procedimientoCuadrado(puntero);
   printf("El cuadrado de %d es: %d\n\n", aux, num2);

   
    return 0; 
}

int funcCuadradoDeNum(int x)
{
    return(x*x);
}


void procedimientoCuadrado(int * valor)
{
    *valor = *valor * (*valor);
}

