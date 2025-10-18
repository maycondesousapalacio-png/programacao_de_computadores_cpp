/*7. Escreva um programa que solicite ao usuário um número inteiro e um número real e ao final
apresente na tela os dois números informados formatando com duas casas decimais
somente o número real da seguinte forma: "Voce informou os numeros N e X.YY"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int inteiro;
    float real;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &inteiro);
    printf("Informe um número real: ");
    scanf("%f", &real);

    printf("Você informou os números %d e %.2f", inteiro, real);
    
    return 0;
}
