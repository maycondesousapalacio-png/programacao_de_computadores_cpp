#include <iostream>
#include <locale.h>

using namespace std;

void fatorial(int num);
void fibonacci(int num2=0);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n=0;
	
	cout<<"Digite um número: ";
	cin>>n;
	
	fatorial(n);
	fibonacci(n);
}

void fatorial(int num){
	int multi=1;
	for(int i=1;i<=num;i++){
		multi*=i;
	}
	
	cout<<multi<<"\n";
}

void fibonacci(int num2){
	int fi[10];
	int soma=num2+1;
	fi[0]=num2;
	fi[1]=soma;
	
	for(int i=2;i<=10;i++){
		fi[i]=fi[i-2]+fi[i-1];
	}
	
	for(int i=0;i<=10;i++){
		cout<<fi[i]<<" ... ";
	}
}
