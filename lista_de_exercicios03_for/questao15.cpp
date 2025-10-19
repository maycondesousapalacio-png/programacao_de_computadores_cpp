/*15. Elabore um algoritmo que solicite N números reais e quando o usuário informar o valor
nulo 0 (zero) o programa ordene e mostre todos os números informados de forma crescente.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float vetor[1000];
    int i=0,j,k;
    
    printf("Esse programa requer que você informe números, o comando de parada é digitar 0.\n");
    
    for(;;){
        int num;
    printf("Informe um número: "); 
    scanf("%d", &num);
    
    if(num==0){
        break;
    }
    
    vetor[i] = num;
    i++;
    }
    
    for(int l=0; l<i-1;l++){
        for(j=0;j<i-l-1;j++){
            if(vetor[j] > vetor[j+1]){
                float temp=vetor[j];
                
                vetor[j]= vetor[j+1];
                vetor[j+1]= temp;
            }
        }
    }
    
    printf("\nNúmeros em ordem crescente: \n");
    for(k=0;k<i;k++){
        printf("%.2f\n", vetor[k]);
    }
    
}
