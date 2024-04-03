/******************************************************************************

Escreva um programa que receba uma letra, em seguida, escreva na tela
se essa letra é uma vogal ou consoante (considerar apenas letras minúsculas).

*******************************************************************************/
#include <stdio.h>

int main()
{
    char vogal; 
    
   printf ("digite uma letra: \n");
   scanf("%c", &vogal);
   switch (vogal)
   {
       case 'a':
       printf ("é vogal");
       break;
       
       case 'e':
       printf ("é vogal");
       break;
       
       case 'i':
       printf ("é vogal");
       break;
       
       case 'o':
       printf ("é vogal");
       break;
       
       case 'u':
       printf ("é vogal");
       break;
       
       default:
       printf("é uma consoante");
       break;
   }
   
   
}

