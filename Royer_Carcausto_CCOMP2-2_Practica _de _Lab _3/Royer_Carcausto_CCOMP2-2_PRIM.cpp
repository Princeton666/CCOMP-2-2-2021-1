//Implemente un programa que imprima solicite por teclado un numero n e imprima los n primeros primos

#include <iostream>
using namespace std;


int main(){
	int n;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	int contadorDivisores=0;
	for(int i=2;i<n;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				contadorDivisores+=1;
			}
			if(contadorDivisores>2){
				contadorDivisores=0;
				break;
			}
		}
		if(contadorDivisores==2){
			cout<<i<<" ";
			contadorDivisores=0;
		}
	}
	return 0;
}
