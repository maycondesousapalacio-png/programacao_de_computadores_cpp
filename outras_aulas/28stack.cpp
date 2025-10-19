#include <iostream>
#include <locale.h>
#include <stack>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	stack <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
	cout<<"Carta do Topo: "<< cartas.top()<<"\n";
	
	cartas.pop();
	
	cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
	cout<<"Nova Carta do Topo: "<< cartas.top()<<"\n";/
	
	return 0;
}
