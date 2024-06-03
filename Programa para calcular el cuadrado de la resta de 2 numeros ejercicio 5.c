/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    int numero1, numero2;
    int diferencia, resultado;
    printf("Programa para calcular el cuadrado de la resta de 2 numeros\n");
    printf("Coloque el primer numero; pq si no, no podemos hacer es naida: ");
    scanf("%d", &numero1);
    printf("Coloque el segundo numero: ");
    scanf("%d", &numero2);

    diferencia = numero1 - numero2;
    resultado = pow(diferencia, 2);

    printf("El cuadrado de la diferencia de los dos numeros es: %d", resultado);

    return 0;
}