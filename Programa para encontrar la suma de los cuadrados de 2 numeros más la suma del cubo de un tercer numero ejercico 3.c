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
    float x, y, z;
    float Res;

    printf("Programa para encontrar la suma de los cuadrados de 2 numeros más la suma del cubo de un tercer numero.\n");

    printf("Coloque un primer numero que sera elevado al cuadrado: ");
    scanf("%f", &x);
    
    printf("Coloque el segundo numero para elevarlo aL cuadrado: ");
    scanf("%f", &y);
    
    printf("Coloca un numero para elevarlo al cubo: ");
    scanf("%f", &z);

    Res=(x*x)+(y*y)+(z*z*z);

    printf("El Resultado es %.2f", Res);

    return(0);
}