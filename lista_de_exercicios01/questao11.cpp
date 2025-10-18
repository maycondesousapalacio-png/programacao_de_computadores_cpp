/*11. Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela o
numero informado e na linha de baixo o dobro deste número da seguinte forma:
Numero -> X
Dobro deste numero -> Y*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num, dobro;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    dobro = num*2;
    
    printf("Número-> %.0f\n", num);
    printf("Dobro deste número-> %.0f", dobro);
    
    return 0;
}
