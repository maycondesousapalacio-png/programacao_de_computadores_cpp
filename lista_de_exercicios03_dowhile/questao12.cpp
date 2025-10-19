/*12. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o nome e idade de N
pessoas e ao final apresentar o nome da pessoa mais velha.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i, rep, idade, idadeVelho;
    char nome[50], nomeVelho[50];
    
    inicio:
    printf("\nInforme a quantidade de registros a serem lidos: ");
    scanf("%d", &rep);
    
    if(rep<=0){
        printf("Valor informado inválido");
        goto inicio;
    }
    
    i=0;
    do{
            printf("Informe o nome da %i° pessoa: ", i+1);
            scanf(" %[^\n]", nome);
            printf("Informe a idade da pessoa: ");
            scanf("%d", &idade);
            
            if(idade>idadeVelho){
                idadeVelho=idade;
                strcpy(nomeVelho, nome);
            }
        i++;   
    } while(i<rep);
    
    if(rep=1){
        printf("A pessoa mais velha é %s", nome);
    } else if(rep>1){
        printf("A pessoa mais velha é %s", nomeVelho);
    }
    
    
}
