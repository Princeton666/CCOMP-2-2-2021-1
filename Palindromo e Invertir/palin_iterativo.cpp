#include <iostream>
using namespace std;

bool palindromo(int a[],int a_length){
    for(int i=0;i<(a_length/2);i++){
        if(a[i]!=a[a_length-i-1])
            return false;
    }
    return true;

}


int main(){
    int array_test[5]={1,2,3,1,1};
	if (palindromo(array_test,5))
		cout<<"Es palindromo";
	else
		cout<<"No es palindromo";
	return 0;

}