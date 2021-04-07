#include <iostream>
#include <string>

class MotorVehicle
{
private:
    /* data */
    std::string make;
    std::string fuellType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity;

public:
    MotorVehicle(std::string _make,std::string _fuellType,std::string _color)
    {
        make=_make;
        fuellType=_fuellType;
        color=_color;
    } 
    std::string getMake()const{
        return make;
    }
    std::string getFuellType()const{
        return fuellType;
    }
    std::string getColor()const{
        return color;
    } 
    int getYearOfManufacture()const{
        return yearOfManufacture;
    }
    int getEngineCapacity()const{
        return engineCapacity;
    }
    void setMake(std::string _make){
        make=_make;
    }
    void setFuellType(std::string _fuellType){
        fuellType=_fuellType;
    }
    void setColor(std::string _color){
        color=_color;
    } 
    void setYearOfManufacture(int _YearOfManufacture){
        yearOfManufacture=_YearOfManufacture;
    }
    void setEngineCapacity(int _EngineCapacity){
        engineCapacity=_EngineCapacity;
    }
    void displayCarDetails(){
        std::cout<<"Make: "<<make<<std::endl;
        std::cout<<"Fuell Type: "<<fuellType<<std::endl;
        std::cout<<"Color: "<<color<<std::endl;
        std::cout<<"Year of manufacture: "<<yearOfManufacture<<std::endl;
        std::cout<<"Engine Capacity: "<<engineCapacity<<std::endl;
    }

};

