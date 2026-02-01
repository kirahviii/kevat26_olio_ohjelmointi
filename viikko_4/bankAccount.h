#pragma once
#include <iostream>
#include <string>

using std::cout,std::endl,std::string;

class BankAccount{
    public:
        BankAccount(){};       
        BankAccount(string);
        double getBalance();
        virtual bool deposit(double);
        virtual bool withdraw(double);
    protected:
        string owner;
        double balance=0;
};



