/*5. Elabore um algoritmo que leia um n�mero inteiro e imprima uma das mensagens: � m�ltiplo
de 3, ou, n�o � m�ltiplo de 3*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
    
    if(num%3==0){
        printf("� m�ltiplo de 3");
    } else{
        printf("N�o � m�ltiplo de 3");
    }
    return 0;
}
