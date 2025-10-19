/*11. Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de
n�meros a serem lidos. Em seguida, leia n n�meros (conforme o valor informado
anteriormente) e imprima a soma e a m�dia aritm�tica dos n�meros informados.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media;
    int i, rep, num, soma = 0;
    
    printf("Informe a quantidade de n�meros a serem lidos: ");
    scanf("%d", &rep);
    
    printf("Digite %d n�meros:\n", rep);
    for(i = 0; i < rep; i++){
        printf("N�mero %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    
    media = (float)soma / rep;

    printf("\nSoma dos n�meros: %d\n", soma);
    printf("M�dia aritm�tica: %.2f\n", media);
    
    return 0;
}
