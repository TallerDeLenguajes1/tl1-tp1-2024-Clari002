#include <stdio.h>


int funcCuadradoDeNum(int x);
void procedimientoCuadrado(int valor);
void direccionYContenido2(int * direccion);
void invertir(int a, int b);
void orden(int a, int b);



int main()
{
    //consigna 4 a)
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    int cuadrado = funcCuadradoDeNum(num);
    printf("El cuadrado de %d es: %d", num, cuadrado);
    
    //consigna 4 b)
    int num2;
    printf("\nIngrese un numero: ");
    scanf("%d", &num2);
    procedimientoCuadrado(num2);

    //consigna 4 c)
    int variable;
    int *punteroVariable;
    punteroVariable = &variable;
    printf("\nIngrese un numero: ");
    scanf("%d", &variable);
    direccionYContenido2(punteroVariable);

    //consigna 4 f)
    int a, b;
    printf("\n\nINVERTIR NUMEROS");
    printf("\na= ");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    invertir(a,b);
    orden(a,b);



    return 0; 
}

int funcCuadradoDeNum(int x)
{
    return(x*x);
}


void procedimientoCuadrado(int valor)
{
    int cuadrado = valor * valor;
    printf("El cuadrado de %d es: %d\n", valor, cuadrado);
}


void direccionYContenido2(int * direccion){
    printf("Direccion: %p", direccion);
    printf("\nValor: %d", *direccion);
}

void invertir(int a, int b)
{
    int aux = a;
    a = b;
    b = aux;
    printf ("\nVALORES INVERTIDOS");
    printf("\na=%d  b=%d", a, b);
}

void orden(int a, int b)
{
    int aux;
    if (a>b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    printf ("\nORDENAR VALORES\n");
    printf("a=%d   b=%d",a,b);
    
}


