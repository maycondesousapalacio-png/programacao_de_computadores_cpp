/*7. Desenvolva um algoritmo que classifique um n�mero inteiro fornecido pelo usu�rio como
par ou �mpar*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
    
    if(num%2==0){
        printf("O n�mero informado � PAR");
    } else{
        printf("O n�mero informado � �MPAR");
    }
    return 0;
}
