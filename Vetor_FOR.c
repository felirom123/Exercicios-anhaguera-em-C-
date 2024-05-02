#include <stdio.h>

int main()  {
 int list[5] = {1, 2, 3, 4, 5};
 int scan;
    
    for (scan = 0; scan <= 4; scan++ )  {
      printf("%i \n", list[scan]);/* a variavel de controle do for 'scan' dentro do 'list' é para atribuir a posição do valor dentro da 'list' */  
    }/* int list[5] = {1(posição 0), 2(posição 1), 3(posição 2), 4(posição 3), 5(posição 4)}; */
    
return 0;
}
