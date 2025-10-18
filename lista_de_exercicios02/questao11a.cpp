/*11. Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da
pessoa mais pesada*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float peso1, peso2;
    char nome1[30], nome2[30];
    
    printf("Informe o nome da primeira pessoa: ");
    scanf(" %[^\n]", &nome1);
    printf("Informe o peso: ");
    scanf("%f", &peso1);
    printf("Informe o nome da segunda pessoa: ");
    scanf(" %[^\n]", &nome2);
    printf("Informe o peso: ");
    scanf("%f", &peso2);
    
    if(peso1>peso2){
        printf("%s é mais pesado(a)", nome1);
    } else if(peso2>peso1){
        printf("%s é mais pesado(a)", nome2);
    } else{
        printf("%s e %s tem o mesmo peso.", nome1, nome2);
    }
    
    return 0;
}
