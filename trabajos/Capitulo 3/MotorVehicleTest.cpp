#include "MotorVehicle.h"
using namespace std;

int main(){
    MotorVehicle auto1{"Toyota","Diesel","Rojo"};
    MotorVehicle auto2{"Nissan","Gasolina","Verde"};

    cout<<auto1.getColor()<<endl;

    auto1.setEngineCapacity(123);
    auto1.setMake("Toyota2");
    cout<<auto1.getEngineCapacity()<<endl;
    cout<<auto1.getMake()<<endl;
    auto2.setEngineCapacity(10);
    auto2.setYearOfManufacture(2031);

    auto2.displayCarDetails();
    return 0;
}