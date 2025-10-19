/*11. Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de
n�meros a serem lidos. Em seguida, leia n n�meros (conforme o valor informado
anteriormente) e imprima a soma e a m�dia aritm�tica dos n�meros informados.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, rep, num, soma = 0;
    float media;
    
    printf("Informe quantos n�meros voc� quer ler: ");
    scanf("%d", &rep);
    
    printf("Digite %d n�meros:\n", rep);
    
    i = 0;
    while(i < rep){
        printf("N�mero %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
        i++;
    }
    
    media = (float)soma / rep;
    
    printf("\nSoma dos n�meros: %d\n", soma);
    printf("M�dia aritm�tica: %.2f\n", media);
    
    return 0;
}
