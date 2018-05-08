//
// Created by Gauthier Germain (https://github.com/ax-IO)
//

#include <iostream>
#include "BankAccount1.h"

using namespace std;

BankAccount::BankAccount() {
    float balance = 0;
}

void BankAccount::deposit(float cash){
    balance += cash;
}


void BankAccount::withdraw(float cash){

    balance -= cash;
}

//transfert la totalité du solde vers c2
BankAccount BankAccount::transfer(BankAccount c2) {
    c2.deposit(balance);
    balance = 0;
    return c2;
}

std::string BankAccount::report() {
    std::string s;
    s = "Le solde est de " + to_string(balance) + " euros";
    return s;
}

BankAccount::~BankAccount() = default;

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

void SavingAccount::init_sav_account(float interest) {
    interestRate = interest;
    balance += interestRate;
}

BankAccount SavingAccount::addInterest(BankAccount c) {
    c = transfer(c);
    return c;
}
