/*14. Elabore um algoritmo que solicite ao usu�rio 10 n�meros reais e ao final apresente o
maior e o menor deles.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    float num, maior, menor;
    
    printf("Esse programa requer que voc� informe 10 n�meros reais\n");
    printf("Informe o 1� n�mero: "); 
    scanf("%f", &num);
    maior = menor = num;
    
    i=2;
    do{
        
    printf("Informe o %d� n�mero: ", i); 
    scanf("%f", &num);
    
    if(num>maior){
        maior=num;
    }
    
    if(num<menor){
        menor=num;
    }
    i++;
    } while(i<=10);
    
    printf("O maior n�mero � %.2f e o menor � %.2f", maior, menor);
    
}
