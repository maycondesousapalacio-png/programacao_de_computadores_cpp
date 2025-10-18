/*5. Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
de 3, ou, não é múltiplo de 3*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    if(num%3==0){
        printf("É múltiplo de 3");
    } else{
        printf("Não é múltiplo de 3");
    }
    return 0;
}
