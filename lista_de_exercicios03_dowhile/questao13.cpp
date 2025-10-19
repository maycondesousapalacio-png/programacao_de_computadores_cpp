/*13. Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N
pessoas e ao final apresentar a m�dia de idade de ambos os g�neros catalogados.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i, rep, qtdM=0, qtdF=0, idade; 
    float idadeM=0, idadeF=0, mediaM=0, mediaF=0;
    char sexo;
    
    inicio:
    printf("\nInforme a quantidade de registros a serem lidos: ");
    scanf("%d", &rep);
    
    if(rep<=0){
        printf("Valor informado inv�lido");
        goto inicio;
    }
    
    i=0;
    do{
        form1:
        getchar();
        printf("Informe o sexo [M/F] da %i� pessoa: ", i+1);
        scanf("%c", &sexo);
        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);
        
        if(sexo=='M' or sexo=='m'){
            idadeM+=idade;
            qtdM+=1;
        } else if(sexo=='F' or sexo=='f'){
            idadeF+=idade;
            qtdF+=1;
        } else {
            printf("Sexo inv�lido\n");
            goto form1;
        }
        i++;   
    } while(i<rep);
    
    mediaM=idadeM/qtdM;
    mediaF=idadeF/qtdF;
    
    if(idadeM>0 and idadeF==0){
        printf("A m�dia de idade maculina � %.1f", mediaM);
    } else if(idadeM>0 and idadeF>0){
        printf("A m�dia de idade maculina � %.1f e a m�dia feminina � %.1f", mediaM, mediaF);
    } else if(idadeM==0 and idadeF>0){
        printf("A m�dia de idade feminina � %.1f", mediaF);
    }
    
    
}
