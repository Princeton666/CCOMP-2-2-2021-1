#include <iostream>
using namespace std;
int main(){
	char keyboard_input;
	cout<<"Input to character: ";
	cin>>keyboard_input;
	cout<<"The value of this character is: ";
	cout<<static_cast<int>(keyboard_input)<<endl;
	return 0;
}
