/*3. Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
número informado é maior que dez, se é menor que dez, ou se é igual a dez*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    
    if(num>10){
        printf("O número informado é maior que 10");
    } else if(num<10){
        printf("O número informado é menor que 10");
    } else{
        printf("O número informado é igual a 10");
    }
    return 0;
}
