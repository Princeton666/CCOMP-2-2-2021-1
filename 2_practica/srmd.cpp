#include <iostream>
int main()
{
    
using namespace std;

float x,y,z,t,suma,resta,multiplicacion,division;

    cout<<"ingresar numero: ";cin>>x;
    cout<<"ingresar numero: ";cin>>y;
    cout<<"ingresar numero: ";cin>>z;
    cout<<"ingresar numero: ";cin>>t;

suma=x+y;
resta=y-z;
multiplicacion=z*t;
division=t/x;

cout<<"la suma de los numeros es: "<<suma<<endl;
cout<<"la resta de los numeros es: "<<resta<<endl;
cout<<"la multiplicacion de los numeros es: "<<multiplicacion<<endl;
cout<<"la division de los numeros es: "<<division<<endl;
    
return 0;
}