#include <iostream>
#include <locale.h>

using namespace std;

void contador(int num);
void contadorRe(int num, int cont=0);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n=0;
	
	cout<<"Digite um número: ";
	cin>>n;
	
	contador(n);
	
	contadorRe(n);
	
	
	return 0;
}


void contadorRe(int num, int cont){
	cout<<cont<<"\n";
	if(num>cont){
		contadorRe(num,++cont);
	}
	
}

void contador(int num){
	for(int i=0;i<=num;i++){
		cout<<i<<"\n";
	}
	
}
