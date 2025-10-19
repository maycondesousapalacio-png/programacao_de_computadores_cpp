/*11. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
números a serem lidos. Em seguida, leia n números (conforme o valor informado
anteriormente) e imprima a soma e a média aritmética dos números informados.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media;
    int i, rep, num, soma = 0;
    
    printf("Informe a quantidade de números a serem lidos: ");
    scanf("%d", &rep);
    
    printf("Digite %d números:\n", rep);
    for(i = 0; i < rep; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    
    media = (float)soma / rep;

    printf("\nSoma dos números: %d\n", soma);
    printf("Média aritmética: %.2f\n", media);
    
    return 0;
}
