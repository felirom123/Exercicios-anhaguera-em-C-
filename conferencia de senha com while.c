/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool senhaConf = false;
    int senhaPass, inputSenha;
    
    while (senhaConf == false)
    {
        printf("Digite a senha padrao \n");
        scanf("%i", &senhaPass );
        printf("Digite sua senha:\n");
        scanf("%i", &inputSenha);
        
        if(senhaPass == inputSenha)
        {
            printf("Acesso autorizado!\n");
            senhaConf = true;
        }
        
        else 
        {
            printf("Senha Incorreta!\n");
        }
        
       
    }
    
    
}


