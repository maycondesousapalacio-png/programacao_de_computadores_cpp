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
    
    i=2;
    do{
        
    printf("Informe o %d° número: ", i); 
    scanf("%f", &num);
    
    if(num>maior){
        maior=num;
    }
    
    if(num<menor){
        menor=num;
    }
    i++;
    } while(i<=10);
    
    printf("O maior número é %.2f e o menor é %.2f", maior, menor);
    
}
