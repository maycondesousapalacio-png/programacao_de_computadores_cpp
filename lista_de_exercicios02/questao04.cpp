/*4. Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � positivo, negativo ou nulo (zero)*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um n�mero: ");
    scanf("%f", &num);
    
    if(num>0){
        printf("O n�mero informado � POSITIVO");
    } else if(num<0){
        printf("O n�mero informado � NEGATIVO");
    } else{
        printf("O n�mero informado � NULO");
    }
    return 0;
}
