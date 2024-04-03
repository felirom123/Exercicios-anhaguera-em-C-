/******************************************************************************

 (Calculadora) - Codifique um programa que faça a leitura de dois números
reais. A seguir o programa lê um caractere, que deve ser +, -,
* ou /, e realiza a operação
indicada pelo caractere sobre os valores lidos

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2; 
    char operacao;
   
   printf ("escolha uma operação +  -  *  /  ");
   scanf ("%c", &operacao); 
   
   printf ("digite um numero: \n");
   scanf ("%d", &num1);
   
   printf ("digite outro numero: \n");
   scanf ("%d", &num2);
   
   
   
   switch (operacao)
   {
       case '+':
       printf ("resultado: %d",(num1 + num2));
       break;
       
       case '-':
       printf ("resultado: %d",(num1 - num2));
       break;
       
       case '*':
       printf ("resultado: %d",(num1 * num2));
       break;
       
       case '/':
       printf ("resultado: %d",(num1 / num2));
       break;
       
       
       default:
       printf("operação invalida");
       break;
   }
   
   
}

