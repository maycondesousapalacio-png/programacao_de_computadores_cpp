/*6. Refazer o exerc�cio anterior, solicitando antes o m�ltiplo a ser testado*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, multiplo;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
    printf("Informe o m�ltiplo a ser testado: ");
    scanf("%d", &multiplo);
    
    if(num%multiplo==0){
        printf("� m�ltiplo de %d", multiplo);
    } else{
        printf("N�o � m�ltiplo de %d", multiplo);
    }
    return 0;
}
