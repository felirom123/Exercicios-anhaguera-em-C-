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
   
   switch(cod)
   {
       case 100:
       total = quant * 1.20;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 101:
       total = quant * 1.30;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 102:
       total = quant * 1.50;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 103:
       total = quant * 1.20;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 104:
       total = quant * 1.70;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 105:
       total = quant * 2.20;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 106:
       total = quant * 1.00;
       printf("Total a pagar: %.2f", total);
       break;
       
       default:
       printf("Codigo invalido");
       break;
   }
}
