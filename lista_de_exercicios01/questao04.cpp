/*4. Escreva um programa que solicite ao usu�rio dois n�meros inteiros e ao final apresente na
tela os dois n�meros informados da seguinte forma: "Voce informou os numeros X e Y"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    
    printf("Digite um n�mero: ");
    scanf("%d", &num1);
    printf("Digite outro n�mero: ");
    scanf("%d", &num2);
    printf("Voc� informou os n�meros %d e %d", num1, num2);
    
    return 0;
}
