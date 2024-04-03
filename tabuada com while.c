/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool controle = false;
    int numero;
    
    while(controle == false)
    {
        printf("Digite um numero entre 1 e 10:");
        scanf("%i", &numero);
        
        if (numero >= 1 && numero <= 10)
        {
            int contador;
            while(contador <= 10)
            {
                printf("%i X %i = %i \n", numero, contador, numero * contador);
                contador++;
            }
            break;
            
        }
        else
        {
            printf("Numero invalido");
            controle = true;
        }
    }
}

