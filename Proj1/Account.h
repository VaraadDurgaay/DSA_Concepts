#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
using namespace std;
class Account{
    public:
        int balance;
        int amt;
    public:
        void deposit(int amount){
            balance += amount;
            cout<<"Deoisit successful"<<endl;
            cout<<balance<<endl;
        }
        void withdraw(int amount){
            if(balance >=amount){
                balance -= amount;
                cout<<"withdrawed"<<endl;
                cout<<balance<<endl;
            }
            else {
                cout<<"insufficient balance"<<endl;
            }
        }
        Account (int bal){
            balance = bal;
            cout<<"money added and single anrgs constructor called"<<endl;
        }
};
#endif