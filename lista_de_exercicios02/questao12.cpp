/*12. Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e
90, ou não*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1;
    
    printf("Informe um número: ");
    scanf("%f", &num1);
    
    if(num1>20 and num1<90){
        printf("O número informado está entre 20 e 90");
    } else{
        printf("O número informado não está entre 20 e 90");
    }
    
    return 0;
}
