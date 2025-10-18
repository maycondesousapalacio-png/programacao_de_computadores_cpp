/*2. Escreva um programa em linguagem C que solicite ao usuário um número inteiro e ao final
apresente na tela o número informado pelo usuário do programa*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("%d", num);
    return 0;
}
