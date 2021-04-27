#include <iostream>
using namespace std;

void intercambio(int a[],int i,int a_length){
    int var_temp;
    if(i==(a_length-1))
		return ;
    var_temp=a[i];
    a[i]=a[a_length-1-i];
    a[a_length-1-i]=var_temp;
	intercambio(a,++i,--a_length);
}
int main(){
    int array_test[5]={1,2,3,4,5};
	intercambio(array_test,0,5);
    for(int i=0;i<5;i++){
        cout<<array_test[i]<<" ";
    }
    return 0;
}