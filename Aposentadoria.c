/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int temps1, idade;
 printf("Declare o tempo trabalhado: ");
 scanf("%i",&temps1);
 
 printf("Declare sua idade: ");
 scanf("%i",&idade);
 
 if(idade >= 65 || temps1 >= 30 ){
     printf("PoderÃ¡ se aposentar!");
 }
 else if (idade >= 60 && temps1 >= 25  ){
         printf("Podera¡ se aposentar!");
     }
     else {
         printf("NÃo podera¡ se aposentar");
         
     }
 
}
