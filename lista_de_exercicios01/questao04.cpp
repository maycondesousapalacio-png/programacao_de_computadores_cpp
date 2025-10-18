/*4. Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente na
tela os dois números informados da seguinte forma: "Voce informou os numeros X e Y"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    printf("Você informou os números %d e %d", num1, num2);
    
    return 0;
}
