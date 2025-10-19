#include <iostream>
#include <locale.h>
#include <stack>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	stack <int> cartas;
	
	if (cartas.empty()){
		cout<<"Pilha vazia\n\n";
	} else{
		cout<<"Pilha com cartas\n\n";
	}
	
	cartas.push(2);
	cartas.push(5);
	cartas.push(10);
	cartas.push(1);
	
	cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
	cout<<"Carta do Topo: "<< cartas.top()<<"\n";
	
	cartas.top();
	
	cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
	cout<<"Nova Carta do Topo: "<< cartas.top()<<"\n";
	
	if (cartas.size()==0){
		cout<<"Pilha vazia\n\n";
	} else{
		cout<<"Pilha com cartas\n\n";
	}
	
	while(!cartas.empty()){
		cartas.pop();
	}
	
	if (cartas.size()==0){
		cout<<"Pilha vazia\n\n";
	} else{
		cout<<"Pilha com cartas\n\n";
	}
	
	
	return 0;
}
