/*14. Escreva um programa que solicite ao usu�rio dois n�meros reais e ao final apresente na
tela o produto dos dois n�meros informados da seguinte forma: "O produto dos numeros N
e X corresponde a Y"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, produto;
    
    printf("Informe um n�mero inteiro: ");
    scanf("%f", &num1);
    printf("Informe outro n�mero inteiro: ");
    scanf("%f", &num2);
    produto = num1*num2;
    
    printf("O produto dos numeros %.0f e %.0f corresponde a %.0f", num1, num2, produto);
    
    
    return 0;
}
