/*2. Escreva um programa em linguagem C que solicite ao usu�rio um n�mero inteiro e ao final
apresente na tela o n�mero informado pelo usu�rio do programa*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    printf("%d", num);
    return 0;
}
