/*12. Elabore um algoritmo que indique se um n�mero digitado est� compreendido entre 20 e
90, ou n�o*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1;
    
    printf("Informe um n�mero: ");
    scanf("%f", &num1);
    
    if(num1>20 and num1<90){
        printf("O n�mero informado est� entre 20 e 90");
    } else{
        printf("O n�mero informado n�o est� entre 20 e 90");
    }
    
    return 0;
}
