/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdbool.h>

int main()
{
    int idade;
    int maior;
    int numerador = 1;
    
    while(numerador <= 5)
    {
        printf("Digite sua idade: \n");
        scanf("%i", &idade);
        numerador ++;
        
       
        if( idade >= 18)
        {
            maior++;
        }
    }
    printf(" %d são maiores de idade", maior);
    
}

