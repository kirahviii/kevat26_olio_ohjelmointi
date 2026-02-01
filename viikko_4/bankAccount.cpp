#include <iostream>
#include <string>
#include "bankAccount.h"

BankAccount::BankAccount(string o){
    owner = o;
    cout << "Bank account created for " << owner << endl;
}

double BankAccount::getBalance(){
    return balance;
}

bool BankAccount::deposit(double amount){
    if(amount < 0){
        cout << "Deposit failed, cant deposit negative amounts" << endl;       
        return false;
    }
    else{
        balance = balance+amount;
        cout << "Deposited "<< amount << " to " << owner << " bank account" << endl;    
        cout << "Balance after deposit: " << balance << endl;   
        return true;
    }
}

bool BankAccount::withdraw(double amount){
    if(amount < 0){
        cout << "Withdrawal failed, cant withdraw negative amounts" << endl;       
        return false;
    }
    else if(amount > balance){
        cout<< "Withdrawal failed, cant withdraw more than " << balance << endl;       
        return false;
    }
    else{
        balance = balance+amount;
        cout << "Withdrew "<< amount << " from " << owner << " bank account" << endl;    
        cout << "Balance after withdrawal: " << balance << endl;   
        return true;
    }
}





