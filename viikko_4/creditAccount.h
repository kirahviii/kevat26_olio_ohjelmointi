#pragma once
#include <iostream>
#include <string>
#include "bankAccount.h"

class CreditAccount: public BankAccount{
    public:
        CreditAccount(){};     
        CreditAccount(string, double);
        virtual bool deposit(double) override; 
        virtual bool withdraw(double) override; 
        double getCredit();
    protected:
        double creditLimit=0; 
};