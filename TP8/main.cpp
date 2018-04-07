/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TP8 : Chaines de caracteres, pointeurs (en C++)
*/


////////////////////////////////////////
//////////////// HEADER ////////////////
////////////////////////////////////////

#include <iostream>
#include <string>

//choix exercice
#include "choix_ex.h"

//Méthodes modification de chaine de caractere
#include "chaine.h"

//#define MAX 100

//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////

using namespace std;

int main() {
    int num;
    std::cout << "   TP8 : Chaines de caracteres, pointeurs (en C++) " << std::endl;
    while (true) {
        std::cout << "Tape le numero de l'exercice voulu (1 a 11): " << std::endl << "(Tape 0 pour quitter le programme) " << std::endl;

        std::cin >> num;
        if (num == 0){break;}
        //Rentre dans les fonctions exercices
        choix_ex::choix_exo(num);
        std::cout << "Exercice numero " << num << " fini! " << std::endl << std::endl;
    }
    return 0;
}