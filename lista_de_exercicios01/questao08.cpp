/*8. Escreva um programa que solicite ao usu�rio a primeira letra de seu nome e ao final
apresente na tela a letra informada pelo usu�rio da seguinte forma: "Voce digitou w"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char letra;
    
    printf("Informe a primeira letra do seu nome: ");
    scanf("%c", &letra);

    printf("Voc� digitou %c", letra);
    
    return 0;
}
