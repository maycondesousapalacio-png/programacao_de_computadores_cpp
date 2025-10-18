/*9. Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contrário, imprima a metade dele*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;
    
    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe outro número: ");
    scanf("%d", &num2);
    soma= num1+num2;
    
    if(soma>10){
        soma=soma*soma;
        printf("%d", soma);
    } else if(soma<10){
        soma/=2;
        printf("%d", soma);
    } else {
        printf("Número inválido");
    }
    
    return 0;
}
