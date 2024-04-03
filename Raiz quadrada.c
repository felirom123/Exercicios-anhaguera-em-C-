/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{   
    float n1, raiz;
    printf("Digite seu numero\n");
    scanf("%f", &n1);
     raiz = sqrt(n1);
    
    printf("a raiz quadradada do numero %.2f é %.2f", n1, raiz);
}

