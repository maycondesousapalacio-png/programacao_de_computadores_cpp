/*5. Escreva um programa que solicite ao usuário um número real e ao final apresente na tela o
número informado formatado com duas casas decimais da seguinte forma: "Voce informou
o numero X.YY"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1;
    
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Você informou o número %f", num1);
    
    return 0;
}
