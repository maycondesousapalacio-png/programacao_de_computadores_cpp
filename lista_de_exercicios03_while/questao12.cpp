/*12. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o nome e idade de N
pessoas e ao final apresentar o nome da pessoa mais velha.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int rep, i, idade, idadeVelho;
	char nome[100], nomeVelho[100];
	
	printf("Informe quantos formulários você quer verificar:");
	scanf("%d", &rep);
	
	i=0;
	while(i<rep){
		printf("Informe o nome a ser verificado: ");
		scanf(" %[^\n]", &nome);
		printf("Informe a idade do indivíduo: ");
		scanf("%d", &idade);
		
		if(idade>idadeVelho){
			idadeVelho=idade;
			strcpy(nomeVelho, nome);
		}
	i++;
	}
	
	printf("%s é o mais velho", nomeVelho);
}
