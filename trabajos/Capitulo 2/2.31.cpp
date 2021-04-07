#include <iostream>
using namespace std;
int main(){
	int miles, gallon, miles_per_gallon, parking, tolls;
	int total;
	cout<<"Input total miles driven per day: ";
	cin>>miles;
	cout<<"Input cost per gallon of gasoline: ";
	cin>>gallon;
	cout<<"Input Average miles per gallon: ";
	cin>>miles_per_gallon;
	cout<<"Input parking fees per day: ";
	cin>>parking;
	cout<<"Tolls per day: ";
	cin>>tolls;
	total=tolls+parking+(miles/miles_per_gallon)*gallon;
	cout<<endl<<"Total cost: "<<total<<endl;
}
