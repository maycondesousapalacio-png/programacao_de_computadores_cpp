/*13. Escreva um programa que solicite ao usu�rio dois n�meros inteiros e ao final apresente
na tela a soma dos dois n�meros informados da seguinte forma: "O numeros N e X
somados correspondem a Y"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;
    
    printf("Informe um n�mero inteiro: ");
    scanf("%i", &num1);
    printf("Informe outro n�mero inteiro: ");
    scanf("%i", &num2);
    soma = num1+num2;
    
    printf("Os n�meros %i e %i somados correspondem a %i" , num1, num2, soma);
    
    
    return 0;
}
