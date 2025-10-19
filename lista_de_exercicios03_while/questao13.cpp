/*13. Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N
pessoas e ao final apresentar a m�dia de idade de ambos os g�neros catalogados.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int rep, i, divisorM=0, divisorF=0;
	float idadeF=0, idadeM=0, idade=0;
	char nome[100], sexo;
	
	printf("Informe quantos formul�rios voc� quer verificar:");
	scanf("%d", &rep);
	
	i=0;
	while(i<rep){
		
		getchar();
		printf("Informe o sexo do esp�cime (M/F): ");
		scanf("%c", &sexo);
		printf("Informe o nome a ser verificado: ");
		scanf(" %[^\n]", &nome);
		printf("Informe a idade do indiv�duo: ");
		scanf("%f", &idade);
		
		if(sexo=='m' or sexo=='M'){
			
			idadeM+=idade;
			divisorM++;
			
		} else if(sexo=='f' or sexo=='F'){
			
			idadeF+=idade;
			divisorF++;
			
		} else{
			printf("Sexo inv�lido");
		}
		
		i++;
	}
	
	idadeM=idadeM/divisorM;
	idadeF=idadeF/divisorF;
	
	if(rep>0){
		if(divisorM>0){
			printf("A m�dia de idade dos homens � %.2f\n", idadeM);
		}
		
		if(divisorF>0){
			printf("A m�dia de idade das mulheres � %.2f", idadeF);
		}
				
	} else if(rep=0){
		printf("Programa finalizado");
	} else{
		printf("Valor inv�lido");
	}
	
	
	
}
