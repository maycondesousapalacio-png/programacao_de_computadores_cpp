#include <iostream>
#include <locale.h>

using namespace std;

void texto(); /*  É NECESSÁRIO PROTOTIPAR A FUNÇÃO PARA CHAMAR ELA DENTRO DO MAIN */
void soma(int n1, int n2);
int soma2(int n1,int n2);
void tr(string tra[4]);

int main(){
	int res;
	string transp[4]={"Carro","Moto","Barco","Aviao"};
	
	res=soma2(20,20);
	cout<<res<< "\n";
	cout<< soma2(125,75);
	
	for(int i=0;i<10;i++){
		texto();
		soma(15,5);
	}
	
	tr(transp);
	
		
	return 0;
}

/*  É MUITO RECOMENDÁVEL DECLARAR AS FUNÇÕES APÓS A FUNÇÃO MAIN */

void texto(){
	cout <<"\nCanal Fessor Bruno\n";
}

void soma(int n1, int n2){
	cout<<n1+n2;
}

int soma2(int n1,int n2){
	return n1+n2;
}

void tr(string tra[4]){
	for(int i=0;i<4;i++){
		cout<<tra[i]<<"\n";
	}
}
