/*8. Escreva um programa que solicite ao usuário a primeira letra de seu nome e ao final
apresente na tela a letra informada pelo usuário da seguinte forma: "Voce digitou w"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char letra;
    
    printf("Informe a primeira letra do seu nome: ");
    scanf("%c", &letra);

    printf("Você digitou %c", letra);
    
    return 0;
}
