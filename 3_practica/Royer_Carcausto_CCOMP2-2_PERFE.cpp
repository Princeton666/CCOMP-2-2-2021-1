#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	
	int sumaFactores=0;
	int i=2;
	while(n>0){
		for(int j=1;j<i;j++){
			if(i%j==0){
				sumaFactores+=j;
			}
			if(sumaFactores>i){
				sumaFactores=0;
				break;
			}
		}
		if(sumaFactores==i){
			n--;
			cout<<i<<" ";
		}
		sumaFactores=0;
		i++;
	}
	

	
	return 0;

}
