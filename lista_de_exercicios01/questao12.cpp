/*12. Reescrever o programa anterior apresentando o quadrado e o cubo do n�mero informado*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num, dobro, quadrado, cubo;
    
    printf("Informe um n�mero: ");
    scanf("%f", &num);
    dobro = num*2;
    quadrado = num*num;
    cubo = num*num*num;
    
    printf("N�mero-> %.0f\n", num);
    printf("Dobro deste n�mero-> %.0f\n", dobro);
    printf("Quadrado deste n�mero-> %.0f\n", quadrado);
    printf("Cubo deste n�mero-> %.0f\n", cubo);
    
    return 0;
}
