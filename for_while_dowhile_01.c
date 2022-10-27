/*****************************************************************************
for, while, do...while
******************************************************************************/
#include <stdio.h>

int main(){
  int i,cont;
  printf("Aqui é FOR: \n");
  for (i=1;i<=10;i++){
    printf("%d - Hello World\n",i);
  }
  printf("Aqui é WHILE: \n");
  cont=1;
  while(cont<=10){
    printf("%d - Hello World\n",cont);
    cont++;
  }

  printf("Aqui é DO WHILE: \n",cont);
  cont=1;
  do{
    printf("%d - Hello World\n",cont);
    cont++;
  }while(cont<=10);
  return 0;
}
