#include <iostream>
#include <string>
#include "creditAccount.h"

CreditAccount::CreditAccount(string o, double l){
    owner = o;
    creditLimit = l;
    cout << "Credit account created for " << owner << " with credit limit of " << creditLimit << endl;
}

bool CreditAccount::deposit(double amount){
    if(amount < 0){
        cout<<"Deposit failed, cant deposit negative amounts"<<endl;      
        return false;
    }
    else{
        balance = balance+amount;
        if(balance > 0){
            balance = 0;
        }
        cout << "Deposited "<< amount << " to " << owner << " credit account" << endl;     
        cout << "Balance after deposit: " << balance << endl;
        return true;
    }
}

bool CreditAccount::withdraw(double amount){
    if(amount < 0){
        cout << "Withdrawal failed, cant withdraw negative amounts" << endl;       
        return false;
    }
    else if(amount > creditLimit){
        cout << "Withdrawal failed, cant withdraw over credit limit" << endl;     
        return false;
    }
    else{
        creditLimit = creditLimit-amount;
        cout << "Withdrawal from " << owner << " account" << endl;   
        cout << "Withdrew: " << amount << endl;
        cout << "Remaining credit: " << creditLimit << endl;   
        return true;
    }
}

double CreditAccount::getCredit(){
    return creditLimit;
}


