#include <iostream>

using namespace std;
int main(){
	int integer1, integer2, integer3, integer4, integer5;
	int largest, smallest;

	cout << "Enter five integers: ";
	cin >> integer1 >> integer2 >> integer3 >> integer4 >> integer5;
	smallest = integer1;
	if ( integer1 < smallest )
		smallest = integer1;

	if ( integer2 < smallest )
		smallest = integer2;

	if ( integer3 < smallest )
		smallest = integer3;

	if ( integer4 < smallest )
		smallest = integer4;

	if ( integer5 < smallest )
		smallest = integer5;

	largest = integer1;
	if ( integer1 > largest )
		largest = integer1;

	if ( integer2 > largest )
		largest = integer2;

	if ( integer3 > largest )
		largest = integer3;

	if ( integer4 > largest )
		largest = integer4;

	if ( integer5 > largest )
		largest = integer5;

	cout<<"Smallest is: "<<smallest<<endl;
	cout<<"Largest is: "<<largest<<endl;

	return 0;
}