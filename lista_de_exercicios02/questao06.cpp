/*6. Refazer o exercício anterior, solicitando antes o múltiplo a ser testado*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, multiplo;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    printf("Informe o múltiplo a ser testado: ");
    scanf("%d", &multiplo);
    
    if(num%multiplo==0){
        printf("É múltiplo de %d", multiplo);
    } else{
        printf("Não é múltiplo de %d", multiplo);
    }
    return 0;
}
