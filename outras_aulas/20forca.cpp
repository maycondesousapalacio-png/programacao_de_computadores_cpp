#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[30], letra, secreta[30];
	int tam,i,chances,acertos;
	bool acerto;
	
	chances=6;
	tam=0;
	acerto=false;
	acertos=0;
	i=0;
	
	cout<<"Digite a palavra secreta: ";
	cin>>palavra;
	system("cls");
	
	while(palavra[i] != '\0'){  /*ESSE \0 INDICA O FIM DE UMA STRING QUE NÃO OCUPA TODO O ESPAÇO DO ARRAY*/
		i++;
		tam++;
	}
	
	for(i=0;i<30;i++){
		secreta[i]='-';
	}
	
	while((chances>0)and (acertos<tam)){
		cout<<"Chances restantes: "<<chances<<"\n\n";
		cout<<"Palavra secreta: ";
		for(i=0;i<tam;i++){
			cout<<secreta[i];
		}
		cout<<"\n\nDigite uma letra: ";
		cin>>letra;
		for(i=0;i<tam;i++){
			if(palavra[i]==letra){
				acerto=true;
				secreta[i]=palavra[i];
				acertos++;
			}
		}
		if(acerto==false){
			chances--;
		}
		acerto=false;
		system("cls");
		
	}
	
	if(acertos==tam){
		cout<< "Você VENCEU!";
	} else{
		cout<<"Você PERDEU";
	}
	
	
	
	
	
	return 0;
}
