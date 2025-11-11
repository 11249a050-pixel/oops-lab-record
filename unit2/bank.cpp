#include<iostream>
using namespace std;
class BankAccount{
    private:
    string name;
    int accountNumber;
    double balance;
    public:
    BankAccount(){
        name="unknown";
        accountNumber=0;
        balance=0.0;
    }
    BankAccount(string n,int accno,double bal){
        name=n;
        accountNumber=accno;
        balance=bal;
    }
    BankAccount(const BankAccount &acc){
        name=acc.name;
        accountNumber=acc.accountNumber;
        balance=acc.balance;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"AccountNo:"<<accountNumber<<endl;
        cout<<"Blance:"<<balance<<endl;
    }
};
int main(){
    BankAccount a1;
    BankAccount a2("Jhnasi",12345,50000.0);
    BankAccount a3(a2);
    a1.display();
    a2.display();
    a3.display();
    return 0;
}

    
