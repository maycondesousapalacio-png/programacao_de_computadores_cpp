/*11. Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela o
numero informado e na linha de baixo o dobro deste n�mero da seguinte forma:
Numero -> X
Dobro deste numero -> Y*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num, dobro;
    
    printf("Informe um n�mero: ");
    scanf("%f", &num);
    dobro = num*2;
    
    printf("N�mero-> %.0f\n", num);
    printf("Dobro deste n�mero-> %.0f", dobro);
    
    return 0;
}
