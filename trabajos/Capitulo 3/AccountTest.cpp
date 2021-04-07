#include "Account.h"
using namespace std;
int main(){
    Account account1{"Jane Green",50};
    Account account2{"John Blue",10};
    cout << "account1: " << account1.getName() << " balance is $"<<account1.getBalance()<<endl;
    cout << "account2: " << account1.getName() << " balance is $"<<account2.getBalance()<<endl;

    account1.withdraw(40);
    account2.withdraw(13);

    cout << "account1: " << account1.getName() << " balance is $"<<account1.getBalance()<<endl;
    cout << "account2: " << account1.getName() << " balance is $"<<account2.getBalance()<<endl;

}