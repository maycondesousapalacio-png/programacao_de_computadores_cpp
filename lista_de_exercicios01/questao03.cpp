/*3. Escreva um programa que solicite ao usu�rio um n�mero inteiro e ao final apresente na tela
o n�mero informado da seguinte forma: "Foi informado o valor: X"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    printf("Foi informado o valor: %d", num);
    return 0;
}
