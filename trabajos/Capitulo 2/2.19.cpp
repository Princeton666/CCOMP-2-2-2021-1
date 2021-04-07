#include <iostream>
using namespace std;
int main(){
	int integer1,integer2,integer3;
	cout<<"Input three different integers: ";
	cin>>integer1>>integer2>>integer3;
	
	cout<<"Sum is: "<<integer1+integer2+integer3<<endl;
	cout<<"Average is: "<<(integer1+integer2+integer3)/3<<endl;
	cout<<"Product is: "<<integer1*integer2*integer3<<endl;
	int smallest=integer1;
	if(integer1>integer2 and integer2<integer3)
		smallest=integer2;
	if(integer1>integer3 and integer3<integer2)
         	smallest=integer3;
	cout<<"Smallest is: "<<smallest<<endl;
	int largest=integer1;
	if(integer1<integer2 and integer2>integer3)
		largest=integer2;
	if(integer1<integer3 and integer3>integer2)
		largest=integer3;
	cout<<"Largest is: "<<largest<<endl;


	return 0;

	
}
