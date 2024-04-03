/******************************************************************************

Escreva um programa que indique o número de dias existentes em um
mês.        
Número de dias  / mes
28               02
30               04, 06, 09, 11
31               01, 03, 05, 07, 08, 10, 12

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes; 
    
   printf ("qual mes: \n");
   scanf("%i", &mes);
   switch (mes)
   {
       case 02:
       printf ("28 dias");
       break;
       
       case 04:
       printf ("30 dias");
       break;
       
       case 06:
       printf ("30 dias");
       break;
       
       case 9:
       printf ("30 dias");
       break;
       
       case 11:
       printf ("30 dias");
       break;
       
       case 01:
       printf ("31 dias");
       break;
       
       case 03:
       printf ("31 dias");
       break;
       
       case 05:
       printf ("31 dias");
       break;
       
       case 07:
       printf ("31 dias");
       break;
       
       case 8:
       printf ("31 dias");
       break;
       
       case 10:
       printf ("31 dias");
       break;
       
       case 12:
       printf ("31 dias");
       break;
       
       default:
       printf("mes invalido");
       break;
   }
   
   
}

