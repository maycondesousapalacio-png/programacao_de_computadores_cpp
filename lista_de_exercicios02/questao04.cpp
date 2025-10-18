/*4. Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
número informado é positivo, negativo ou nulo (zero)*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    
    if(num>0){
        printf("O número informado é POSITIVO");
    } else if(num<0){
        printf("O número informado é NEGATIVO");
    } else{
        printf("O número informado é NULO");
    }
    return 0;
}
