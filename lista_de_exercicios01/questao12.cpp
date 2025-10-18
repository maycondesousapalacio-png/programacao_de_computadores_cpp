/*12. Reescrever o programa anterior apresentando o quadrado e o cubo do número informado*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num, dobro, quadrado, cubo;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    dobro = num*2;
    quadrado = num*num;
    cubo = num*num*num;
    
    printf("Número-> %.0f\n", num);
    printf("Dobro deste número-> %.0f\n", dobro);
    printf("Quadrado deste número-> %.0f\n", quadrado);
    printf("Cubo deste número-> %.0f\n", cubo);
    
    return 0;
}
