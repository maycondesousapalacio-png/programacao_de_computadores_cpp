/*15. Elabore um algoritmo que solicite N números reais e quando o usuário informar o valor
nulo 0 (zero) o programa ordene e mostre todos os números informados de forma crescente.*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i=0;
    float num, vetor[1000], aux;
    
    printf("Esse programa requer que você informe números, o comando de parada é digitar 0(zero).\n");
    
    int z=0;
    while(z>-1){
        printf("Informe algum nùmero: ");
        scanf("%f", &num);
        
        if(num==0){
            break;
        }
        
        vetor[i]=num;
        i++;
    }
    
    int l=0;
    while(l<i-1){
        int k=0;
        while(k<i-l-1){
            if(vetor[k]>vetor[k+1]){
                aux=vetor[k];
                vetor[k]=vetor[k+1];
                vetor[k+1]=aux;
                
            }
            k++;
        }
        l++;
    }
    
    printf("Os números informados, ordenados de forma crescente são: \n");
    int w=0;
    while(w<i){
        printf("%.1f\n", vetor[w]);
        w++;
    }
    
}
