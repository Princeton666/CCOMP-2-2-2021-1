#include "Date.h"

int main(){
    Date date1{1,2,2021};
    Date date2{2,21,2023};
    cout<<date1.getMoth()<<" "<<date1.getDay()<<" "<<date1.getYear()<<endl;

    date2.displayDate();
    

}