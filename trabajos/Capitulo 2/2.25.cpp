#include <iostream>
using namespace std;
int main(){
	int integer1,integer2,integer3;
	cout<<"Enter three integers: ";
	cin>>integer1>>integer2>>integer3;
	if(integer3%integer1==0 and integer3%integer2==0)
		cout<<"Two first integers are factor of the "<<integer3<<endl;
	else
		cout<<"Two first integers are not factors of the "<<integer3<<endl;
	return 0;
}
