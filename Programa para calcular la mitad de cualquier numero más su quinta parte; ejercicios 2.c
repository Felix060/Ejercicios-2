/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include<stdio.h>
#include<conio.h>

int main()
{
    float Número;
    float Resultado;

    printf("Programa para calcular la mitad de cualquier numero más su quinta parte.\n");

    printf("Coloque cualquier numero para calcular: ");
    scanf("%f", &Número);

    Resultado=(Número/2)+(Número/5);

    printf("El Resultado es %.2f", Resultado);

    return(0);
}