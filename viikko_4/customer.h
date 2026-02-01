#pragma once
#include <iostream>
#include <string>
#include "creditAccount.h"
#include "bankAccount.h"

using std::cout,std::endl,std::string;

class Customer{
    public:
        Customer(string,double);
        Customer(){};
        string getName();
        void showBalance();
        bool deposit(double);
        bool withdraw(double);
        bool creditPayment(double);
        bool creditWithdraw(double);
        bool bankTransfer(double,Customer&);
    private:
        string name;
        BankAccount currentAccount;    
        CreditAccount creditAccount;   
};



