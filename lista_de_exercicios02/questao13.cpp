/*13. Elabore um algoritmo que leia dois n�meros e imprima qual � maior, qual � menor, ou se
s�o iguais*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;
    
    printf("Informe um n�mero: ");
    scanf("%f", &num1);
    printf("Informe outro n�mero: ");
    scanf("%f", &num2);
    
    if(num1>num2){
        printf("O n�mero %f � maior que %f", num1, num2);
    } else if(num2>num1){
        printf("O n�mero %f � maior que %f", num2, num1);
    } else{
        printf("Os n�meros informados s�o iguais");
    }
    
    return 0;
}
