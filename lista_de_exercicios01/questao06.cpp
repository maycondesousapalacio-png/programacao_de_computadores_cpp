/*6. Escreva um programa que solicite ao usuário a temperatura em graus Celsius e ao final
apresente a temperatura correspondente em graus Farenheit. F = Celsius * 1.8 + 32*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float celsius, farenheit;
    
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    farenheit = (celsius*1.8)+32;
    printf("A tem peratura em Farenheit é: %f", farenheit);
    
    return 0;
}
