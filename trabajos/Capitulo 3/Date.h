#include <iostream>
using namespace std;

class Date
{
private:
    /* data */
    int day;
    int moth;
    int year;
public:
    Date(int _day, int _moth, int _year){
        day=_day;
        year=_year;
        if(_moth>=1 and _moth<=12){
            moth=_moth;
        }
        else{
            moth=1;
        }
    };
    int getDay()const{
        return day;
    }
    int getMoth()const{
        return moth;
    }
    int getYear()const{
        return year;
    }
    void setDay(int _day){
        day=_day;
    }
    void setMoth(int _moth){
        if(_moth>=1 and _moth<=12){
            moth=_moth;
        }
        else{
            moth=1;
        }
    }
    void setYear(int _year){
        year=_year;
    }
    void displayDate(){
        cout<<moth<<"/"<<day<<"/"<<year<<endl;
    }

};

