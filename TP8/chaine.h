//
// Created by ggerm on 01/04/2018.
//

#ifndef TP8_CHAINE_H
#define TP8_CHAINE_H

#include <iostream>
#include <string>

class chaine {
private:
    std::string mot;
public:
    //constructeur
    chaine();

    //pas de constructeur pour les strings
    // car objet et déjà initialisés !!
    //chaine(const std::string &mot);*/

    // destructeur
    virtual ~chaine();

    //Fonction-Membre
    static unsigned long long int compterCaractere(const std::string &mot);
    static void affichageEnHexadecimal(const std::string &mot);
    static void affichageEnDecimal(const std::string &mot);
    static std::string mettreEnMajuscule (std::string mot);
    static std::string mettreEnMinuscule (std::string mot);
    static std::string transformerMinMaj (std::string mot);
    static std::string retournerMot (std::string mot);
    static int rechercherCaractereG (const std::string &mot , char cara);
    static int rechercherCaractereD (const std::string &mot , char cara);
    static int estPalindrome (const std::string &mot);
    static int comparerChaine (const std::string &mot1 , const std::string &mot2);
};


#endif //TP8_CHAINE_H
