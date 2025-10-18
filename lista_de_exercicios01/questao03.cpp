/*3. Escreva um programa que solicite ao usuário um número inteiro e ao final apresente na tela
o número informado da seguinte forma: "Foi informado o valor: X"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("Foi informado o valor: %d", num);
    return 0;
}
