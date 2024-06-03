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
    float Num;
    float Res;

    printf("Programa para calcular el cuadrado de un Número cualquiera disminuido en 25 Unidades.\n");

    printf("coloque una cantidad numérica: ");
    scanf("%f", &Num);

    Res=(Num-25)*(Num-25);

    printf("El Resultado de esta es %.2f", Res);

    return(0);
}