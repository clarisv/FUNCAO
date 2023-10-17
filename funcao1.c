#include<stdio.h>

int maior (int num1, int num2){

   if(num1 > num2){
      return num1;
   }else{
      return num2;
   }

}

main(){

  int n1, n2;
  printf("digite os valores de entrada da funcao: ");
  scanf("%d %d", &n1, &n2);

  int resultado = maior (n1,n2);

  printf("resultado da funcao: %d", resultado);

}