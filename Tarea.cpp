#include <iostream>
int main()
{
using namespace std;

float x,y,suma,resta,multiplicacion,division;
cout<<"ingresar numero: ";cin>>x;
cout<<"ingresar numero: ";cin>>y;

suma=x+y;
resta=x-y;
multiplicacion=x*y;
division=x/y;

cout<<"la suma de los numeros es: "<<suma<<endl;
cout<<"la resta de los numeros es: "<<resta<<endl;
cout<<"la multiplicacion de los numeros es: "<<multiplicacion<<endl;
cout<<"la division de los numeros es: "<<division<<endl;

return 0;
}