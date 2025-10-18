/*11. Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da
pessoa mais pesada*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float peso1, peso2;
    char nome1[30], nome2[30];
    
    printf("Informe o nome da primeira pessoa: ");
    fgets(nome1, sizeof (nome1), stdin);
    printf("Informe o peso: ");
    scanf("%f", &peso1);
    getchar();
    printf("Informe o nome da segunda pessoa: ");
    fgets(nome2, sizeof (nome2), stdin);
    printf("Informe o peso: ");
    scanf("%f", &peso2);
    getchar();
    
    if(peso1>peso2){
        printf("%s é mais pesado(a)", nome1);
    } else if(peso2>peso1){
        printf("%s é mais pesado(a)", nome2);
    } else{
        printf("%s e %s tem o mesmo peso.", nome1, nome2);
    }
    
    return 0;
}
