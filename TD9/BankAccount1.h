//
// Created by Gauthier Germain (https://github.com/ax-IO)
//

#ifndef TD9_BANKACCOUNT1_H
#define TD9_BANKACCOUNT1_H


class BankAccount {
public:
    float balance;
    //constructeur à vide
    BankAccount();

    //Fonctions-membres
    void deposit(float cash);
    void withdraw(float cash);
    BankAccount transfer(BankAccount c2);
    std::string report();

    //Déstructeur
    virtual ~BankAccount();
};

class SavingAccount:public BankAccount{
    float interestRate;

public:
    //pseudo-constructeur
    void init_sav_account(float interest);

    //Fonctions-membres
    BankAccount addInterest (BankAccount c);
};


#endif //TD9_BANKACCOUNT1_H
