/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int cod, quant;
   float total;
   
   printf("Digite o codigo da refeição: ");
   scanf("%d", &cod);
   printf("Digite a quantidade da refeição: ");
   scanf("%d", &quant);
   
   if(cod == 100)
   {
       total = quant * 1.20;
       printf("Total a pagar = %.2f", total);
   }
   else if(cod == 101)
   {
      total = quant * 1.30;
       printf("Total a pagar = %.2f", total); 
   }
    else if(cod == 102)
   {
       total = quant * 1.50;
       printf("Total a pagar = %.2f", total);
   }
    else if(cod == 103)
   {
       total = quant * 1.20;
       printf("Total a pagar = %.2f", total);
   }
    else if(cod == 104)
   {
       total = quant * 1.70;
       printf("Total a pagar = %.2f", total);
   }
    else if(cod == 105)
   {
       total = quant * 2.20;
       printf("Total a pagar = %.2f", total);
   }
    else if(cod == 106)
   {
       total = quant * 1.00;
       printf("Total a pagar = %.2f", total);
   }
   else
   {
       printf("codigo invalido");
   }
   
}

