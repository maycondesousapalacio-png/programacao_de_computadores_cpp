/*7. Escreva um programa que solicite ao usu�rio um n�mero inteiro e um n�mero real e ao final
apresente na tela os dois n�meros informados formatando com duas casas decimais
somente o n�mero real da seguinte forma: "Voce informou os numeros N e X.YY"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int inteiro;
    float real;
    
    printf("Informe um n�mero inteiro: ");
    scanf("%d", &inteiro);
    printf("Informe um n�mero real: ");
    scanf("%f", &real);

    printf("Voc� informou os n�meros %d e %.2f", inteiro, real);
    
    return 0;
}
