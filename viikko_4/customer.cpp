#include <iostream>
#include <string>
#include "customer.h"
#include "creditAccount.h"
#include "bankAccount.h"

using std::cout,std::endl,std::string;

Customer::Customer(string n, double l) : creditAccount(n,l), currentAccount(n){
    name=n;
    cout << "Created account for " << name << endl;
    cout << "Bank account balance: " << currentAccount.getBalance() << endl;
    cout << "Remaining credit: " << creditAccount.getCredit() << endl;
}

string Customer::getName(){
    return name;
}

void Customer::showBalance(){
    cout << name << " bank account balance: " << currentAccount.getBalance() << endl;
    cout << name << " remaining credit of credit account: " << creditAccount.getCredit() << endl;
}

bool Customer::deposit(double amount){     
    currentAccount.deposit(amount);
    return true;
}

bool Customer::withdraw(double amount){     
    currentAccount.withdraw(amount);
    return true;
}

bool Customer::creditPayment(double amount){
    creditAccount.deposit(amount);
    return true;
}

bool Customer::creditWithdraw(double amount){
    creditAccount.withdraw(amount);
    return true;
}

bool Customer::bankTransfer(double amount, Customer& dude){
    if(currentAccount.getBalance() > amount){
        currentAccount.withdraw(amount);
        dude.currentAccount.deposit(amount);
        cout << getName() << " transferred " << amount << " to " << dude.getName() << " account" << endl;
        return true;
    }
    else if(amount < 0){
        cout << "Transfer failed, cant transfer negative amounts" << endl;       
        return false;
    }
    else{
        cout << "Transfer failed, " << getName() << " account did not have enough balance" << endl;
        return false;
    }
}
