#include <stdio.h>

int main(void)
{
  int nota1, nota2, media;
  

  printf("Digite a primeira nota do aluno: ");
  scanf("%i",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%i",&nota2);
  
  media = (nota1 + nota2) / 2;
  
  printf("Media do aluno = %i\n",media);
  
  if(media >= 6 && media <= 10){
      printf("Aprovado!");
      
  }
  else if(media >= 4 && media <= 5){
      printf("Exame!");
      
  }
  else{
      printf("Reprovado!");
  }
}

