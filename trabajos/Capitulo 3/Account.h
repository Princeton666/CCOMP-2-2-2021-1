#include <string>
#include <iostream>
class Account{
public:
    Account(std::string accountName,int initialBalance): name{accountName}{   
        if (initialBalance>0){
            balance = initialBalance;
        }
    }
    void deposit(int depositAmount){
        if(depositAmount>0){
            balance=balance+depositAmount;
        }
    }
    int getBalance()const{
        return balance;
    }
    void setName(std::string accountName){
        name=accountName;
    }
    std::string getName()const{
        return name;
    }
    void withdraw(int withdrawl){
        if(withdrawl>balance){
            std::cout<<"Withdrawal amount exceeded account balance."<<std::endl;
        }
        else{
            balance=balance-withdrawl;
        }

    }
private:
    std::string name;
    int balance{0};
};