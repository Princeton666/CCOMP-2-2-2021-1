#include <iostream>
using namespace std;

void intercambio(int a[],int i,int a_length){
    int var_temp;
    if(i==(a_length/2))
		return ;
    var_temp=a[i];
    a[i]=a[a_length-i-1];
    a[a_length-1-i]=var_temp;
	intercambio(a,++i,a_length);
}
int main(){
    int array_test[7]={1,2,3,4,5,6,7};
	intercambio(array_test,0,7);
    for(int i=0;i<7;i++){
        cout<<array_test[i]<<" ";
    }
    return 0;
}
