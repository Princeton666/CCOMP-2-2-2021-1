#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"ingrese el valor de n: ";
	cin>>n;
	int temporal_fibo;
	int fibo_n1=1;
	int fibo=0;
	int i=0;
	while(n>i){
		cout<<fibo<<" ";
		temporal_fibo=fibo;
		fibo=fibo+fibo_n1;
		fibo_n1=temporal_fibo;
		i++;
	}
	return 0;
}
