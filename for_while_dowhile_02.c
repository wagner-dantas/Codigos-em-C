#include <stdio.h>
/*for while do while*/

int main(){
  int senha=123;
  int chute;
  scanf("%d",&chute);
  while(chute != senha){
    printf("Acesso Negado!\n Tente Novamente!\n");
    scanf("%d",&chute);
  }
  printf("Senha Correta!");  
  /// explicação do DOwhile
  /*do{
     printf("tentativa !\n");
    scanf("%d",&chute);
  }while(chute != senha);
  printf("Acertou! Parabéns!");*/
  return 0;
}