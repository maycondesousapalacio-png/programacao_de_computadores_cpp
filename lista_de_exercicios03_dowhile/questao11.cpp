/*11. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
números a serem lidos. Em seguida, leia n números (conforme o valor informado
anteriormente) e imprima a soma e a média aritmética dos números informados.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
  setlocale(LC_ALL, "Portuguese");
  int rep, i, soma=0, num;
  float media;

  printf("Informe a quantidade de números a serem lidos: ");
  scanf("%d", &rep);

  i=1;
  do{
      printf("Digite o %d° número: ", i);
      scanf("%d", &num);
    soma+=num;
    i++;
  } while(i<=rep);
  
  media=soma/rep;

  printf("A soma dos números informados é %d\n", soma);
  printf("A média aritmética dos números informados é %.2f", media);

}
