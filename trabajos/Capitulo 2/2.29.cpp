#include <iostream>
using namespace std;
int main(){
	cout<<"Face length\t\tSurface area\t\tVolume"<<endl;
	cout<<"of cube (cm)\t\tof cube(cm2)\t\tof cube(cm3)"<<endl;
	for(int i=0;i<5;i++){
		cout<<i<<"\t\t\t"<<6*i*i<<"\t\t\t"<<i*i*i<<endl;	
	}
	return 0;
}
