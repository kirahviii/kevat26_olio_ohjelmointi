#include <iostream>
#include <string>
#include "customer.h"

int main(){
    Customer Piki("Piki",1000);
    Piki.deposit(300);
    Piki.creditWithdraw(200);
    Piki.showBalance();
    Customer Subi("Subi",1000);
    Subi.showBalance();
    Piki.bankTransfer(100,Subi);
    Subi.showBalance();
    Piki.showBalance();
    return 0;
}

