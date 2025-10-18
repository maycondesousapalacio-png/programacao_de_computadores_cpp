/*7. Desenvolva um algoritmo que classifique um número inteiro fornecido pelo usuário como
par ou ímpar*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    if(num%2==0){
        printf("O número informado é PAR");
    } else{
        printf("O número informado é ÍMPAR");
    }
    return 0;
}
