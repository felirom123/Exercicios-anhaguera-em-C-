#include <stdio.h>
#include <math.h>

int main()
{
   int n1;
   printf ("digite um numero: \n");
   scanf ("%d", &n1 ); /*usar o "d" depois do porcentagem é possivel por que ele é universal*/
   switch (n1 % 2)
   {
       
       
       case 0:
       printf ("numero par");
       break;
       
       default:
       printf("numero impar");
       break;
       
   }
   
   
}




