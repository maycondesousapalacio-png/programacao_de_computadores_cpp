/*5. Escreva um programa que solicite ao usu�rio um n�mero real e ao final apresente na tela o
n�mero informado formatado com duas casas decimais da seguinte forma: "Voce informou
o numero X.YY"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1;
    
    printf("Digite um n�mero: ");
    scanf("%f", &num1);
    printf("Voc� informou o n�mero %f", num1);
    
    return 0;
}
