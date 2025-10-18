/*13. Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se
são iguais*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;
    
    printf("Informe um número: ");
    scanf("%f", &num1);
    printf("Informe outro número: ");
    scanf("%f", &num2);
    
    if(num1>num2){
        printf("O número %f é maior que %f", num1, num2);
    } else if(num2>num1){
        printf("O número %f é maior que %f", num2, num1);
    } else{
        printf("Os números informados são iguais");
    }
    
    return 0;
}
