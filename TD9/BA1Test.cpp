#include <iostream>
#include "BankAccount1.h"

using namespace std;

//Fonction Main()
//Permet de tester les classes de BankAccount1.h
int main() {
    //Test creation compte vide
    BankAccount compte1;
    //Test affichage (doit etre nul)
    cout<<compte1.report()<<endl;

    //Test depot
    float depot;
    cout<<"Somme a deposer :"<<endl;
    cin>> depot;
    compte1.deposit(depot);

    cout<<compte1.report()<<endl;

    //Test retrait
    float retrait;
    cout<<"Somme a retirer :"<<endl;
    cin>> retrait;
    compte1.withdraw(retrait);

    cout<<compte1.report()<<endl;

    //Test creation epargne
    SavingAccount epargne;
    float interet;
    cout<<"Valeur d'interet : "<<endl;
    cin >> interet;
    epargne.init_sav_account(interet);

    cout<<"Epargne -> "<< epargne.report()<<endl;

    //Test ajout interet
    cout<<"Ajout de vos interet a votre solde principal... "<<endl;
    compte1 = epargne.addInterest(compte1);
    cout<<compte1.report()<<endl;
    return 0;
}