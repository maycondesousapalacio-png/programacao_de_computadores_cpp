/*14. Elabore um algoritmo que solicite ao usuário 10 números reais e ao final apresente o
maior e o menor deles.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    float num, maior, menor;
    
    printf("Esse programa requer que você informe 10 números reais\n");
    printf("Informe o 1° número: "); 
    scanf("%f", &num);
    maior = menor = num;
    
    for(i=2;i<=10;i++){
        
    printf("Informe o %d° número: ", i); 
    scanf("%f", &num);
    
    if(num>maior){
        maior=num;
    }
    
    if(num<menor){
        menor=num;
    }
    }
    
    printf("O maior número é %f e o menor é %f", maior, menor);
    
}
