/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>

int main()
{
    float Num1, Num2;
    float Suma;

    printf("Programa para calcular el Cuadrado de la Suma de 2 Números.\n");

    printf("Coloque un numero: ");
    scanf("%f", &Num1);
    
    printf("Coloque otro numero: ");
    scanf("%f", &Num2);
    
    Suma=(Num1+Num2)*(Num1+Num2);

    printf("El Resultado del Cuadrado de la Suma es %.2f", Suma);

    return(0);
}