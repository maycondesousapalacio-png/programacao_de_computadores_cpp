/*11. Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de
n�meros a serem lidos. Em seguida, leia n n�meros (conforme o valor informado
anteriormente) e imprima a soma e a m�dia aritm�tica dos n�meros informados.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
  setlocale(LC_ALL, "Portuguese");
  int rep, i, soma=0, num;
  float media;

  printf("Informe a quantidade de n�meros a serem lidos: ");
  scanf("%d", &rep);

  i=1;
  do{
      printf("Digite o %d� n�mero: ", i);
      scanf("%d", &num);
    soma+=num;
    i++;
  } while(i<=rep);
  
  media=soma/rep;

  printf("A soma dos n�meros informados � %d\n", soma);
  printf("A m�dia aritm�tica dos n�meros informados � %.2f", media);

}
