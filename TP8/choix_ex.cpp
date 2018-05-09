//
// Created by ggerm on 01/04/2018.
//

#include "choix_ex.h"
#include "chaine.h"

using namespace std;

//#define DEMANDE()   std::cout << "Saisis un mot : "; \
//                    std::string mot \
//                    std::cin >> mot; \


///////////////////////////////////////
/////////// DEFINITION ////////////////
/////////////// DES ///////////////////
///////////// METHODES ////////////////
///////////////////////////////////////

choix_ex::choix_ex() = default;

choix_ex::~choix_ex() = default;

void choix_ex::choix_exo(const int num) {
    switch (num){
        case 1 : choix_ex::ex1(); break;
        case 2 : choix_ex::ex2(); break;
        case 3 : choix_ex::ex3(); break;
        case 4 : choix_ex::ex4(); break;
        case 5 : choix_ex::ex5(); break;
        case 6 : choix_ex::ex6(); break;
        case 7 : choix_ex::ex7(); break;
        case 8 : choix_ex::ex8(); break;
        case 9 : choix_ex::ex9(); break;
        case 10 : choix_ex::ex10(); break;
        case 11 : choix_ex::ex11(); break;
        default : std::cerr << "Erreur : Numero exercice inconnu !" << std::endl;
    }
}

void choix_ex::ex1() {
    std::cout << "Saisis un mot :" << std::endl;
    std::string mot;
    std::cin >> mot;

    std::cout << "Le nombre de caracteres de " << mot << " est " << chaine::compterCaractere(mot) << std::endl;
}


void choix_ex::ex2() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "En Hexadecimal, " << mot << " correspond a : " << std::endl;
    chaine::affichageEnHexadecimal(mot);
}

void choix_ex::ex3() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "En Decimal, " << mot << " correspond a : " << std::endl;
    chaine::affichageEnDecimal(mot);
}


void choix_ex::ex4() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "En Majuscule : " << chaine::mettreEnMajuscule(mot) << std::endl;
}

void choix_ex::ex5() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "En Minuscule : " << chaine::mettreEnMinuscule(mot) << std::endl;
}

void choix_ex::ex6() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "le mot avec maj/min inverses : " << chaine::transformerMinMaj(mot) << std::endl;
}

void choix_ex::ex7() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "a l'envers : " << chaine::retournerMot(mot) << std::endl;
}

void choix_ex::ex8() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "Caractere a rechercher : ";
    char c;
    std::cin >> c;

    std::cout << "la premiere occurence de " << c << " en partant de la gauche est a la position numero " << chaine::rechercherCaractereG(mot,c) << std::endl;
}

void choix_ex::ex9() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    std::cout << "Caractere a rechercher : ";
    char c;
    std::cin >> c;

    std::cout << "la premiere occurence de " << c << " en partant de la droite est a la position numero " << chaine::rechercherCaractereD(mot,c) << std::endl;
}


void choix_ex::ex10() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    (chaine::estPalindrome(mot) == -1)? std::cout << "n'est pas un palindrome !" << std::endl : std::cout << "est un palindrome !" << std::endl ;
}


void choix_ex::ex11() {
    std::cout << "Saisis un mot : ";
    std::string mot;
    std::cin >> mot;

    //Demande un deuxième mot
    std::cout << "Saisis un deuxieme mot : ";
    std::string mot2;
    std::cin >> mot2;

    //Affichage comparaison des chaînes
    switch (chaine::comparerChaine(mot, mot2)){
        case -1 :
            std::cout << mot << " < " << mot2 << std::endl;
            break;
        case 0 :
            std::cout << mot << " = " << mot2 << std::endl;
            break;
        case 1 :
            std::cout << mot << " > " << mot2 << std::endl;
            break;
        default :
            std::cout << "Erreur ! " << std::endl;
    }
}
