#include <iostream>
using namespace std;

void intercambio(int a[],int a_length){
    int valor_temporal;
    for(int i=0;i<(a_length/2);i++){
        valor_temporal=a[i];
        a[i]=a[a_length-i-1];
        a[a_length-i-1]=valor_temporal;
    }
}
int main(){
    int array_test[5]={1,2,5,4,3};
	intercambio(array_test,5);
    for(int i=0;i<5;i++){
        cout<<array_test[i]<<" ";
    }
    return 0;
}