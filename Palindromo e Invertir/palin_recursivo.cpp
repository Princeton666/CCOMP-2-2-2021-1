#include <iostream>
using namespace std;

bool palindromo(int a[],int i,int a_length){

	if(i==(a_length-1))
		return true;
	if(a[i]!=a[a_length-1])
		return false;
	return palindromo(a,++i,--a_length);
	
}


int main(){
	int array_test[5]={1,2,3,2,1};
	if (palindromo(array_test,0,5))
		cout<<"Es palindromo";
	else
		cout<<"No es palindromo";
	return 0;
}
