/*13. Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente
na tela a soma dos dois números informados da seguinte forma: "O numeros N e X
somados correspondem a Y"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;
    
    printf("Informe um número inteiro: ");
    scanf("%i", &num1);
    printf("Informe outro número inteiro: ");
    scanf("%i", &num2);
    soma = num1+num2;
    
    printf("Os números %i e %i somados correspondem a %i" , num1, num2, soma);
    
    
    return 0;
}
