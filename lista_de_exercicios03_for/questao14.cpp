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
    
    for(i=2;i<=10;i++){
        
    printf("Informe o %d� n�mero: ", i); 
    scanf("%f", &num);
    
    if(num>maior){
        maior=num;
    }
    
    if(num<menor){
        menor=num;
    }
    }
    
    printf("O maior n�mero � %f e o menor � %f", maior, menor);
    
}
