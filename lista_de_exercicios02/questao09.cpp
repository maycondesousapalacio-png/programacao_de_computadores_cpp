/*9. Elabore um algoritmo que leia dois n�meros inteiros e realize a adi��o; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contr�rio, imprima a metade dele*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num1);
    printf("Informe outro n�mero: ");
    scanf("%d", &num2);
    soma= num1+num2;
    
    if(soma>10){
        soma=soma*soma;
        printf("%d", soma);
    } else if(soma<10){
        soma/=2;
        printf("%d", soma);
    } else {
        printf("N�mero inv�lido");
    }
    
    return 0;
}
