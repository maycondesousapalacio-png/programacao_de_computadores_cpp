#include <iostream>
#include <locale.h>

using namespace std;

void soma();
void soma(int n1, int n2);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	soma();
    soma(30,50);

	return 0;
	
}

/*É POSSÍVEL TER FUNÇÕES COM O MESMO NOME DESDE DE QUE ELAS TENHAM ARGUMENTOS DE ENTRADA DIFERENTES*/

void soma(int n1, int n2){
	int re=n1+n2;
	
		cout<< "A soma de "<<n1<<" com "<<n2<<" é igual ao valor de "<<re;
}

void soma(){
	int n1,n2,re;
	n1=10;
	n2=20;
	re=n1+n2;
	
	cout<< "A soma de "<<n1<<" com "<<n2<<" é igual ao valor de "<<re;
}
