/*13. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N
pessoas e ao final apresentar a média de idade de ambos os gêneros catalogados.*/

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
        printf("Valor informado inválido");
        goto inicio;
    }
    
    i=0;
    do{
        form1:
        getchar();
        printf("Informe o sexo [M/F] da %i° pessoa: ", i+1);
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
            printf("Sexo inválido\n");
            goto form1;
        }
        i++;   
    } while(i<rep);
    
    mediaM=idadeM/qtdM;
    mediaF=idadeF/qtdF;
    
    if(idadeM>0 and idadeF==0){
        printf("A média de idade maculina é %.1f", mediaM);
    } else if(idadeM>0 and idadeF>0){
        printf("A média de idade maculina é %.1f e a média feminina é %.1f", mediaM, mediaF);
    } else if(idadeM==0 and idadeF>0){
        printf("A média de idade feminina é %.1f", mediaF);
    }
    
    
}
