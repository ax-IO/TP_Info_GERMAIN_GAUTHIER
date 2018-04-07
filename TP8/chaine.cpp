//
// Created by ggerm on 01/04/2018.
//

#include "chaine.h"

using namespace std;
///////////////////////////////////////
/////////// DEFINITION ////////////////
/////////////// DES ///////////////////
///////////// METHODES ////////////////
///////////////////////////////////////

chaine::chaine() = default;
chaine::~chaine() = default;

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
unsigned long long int chaine::compterCaractere(const std::string &mot) {
    return mot.size();
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
void chaine::affichageEnHexadecimal(const std::string &mot) {
    unsigned long long int MAX = chaine::compterCaractere(mot);

    for (int i = 0; i<MAX; i++){
        if (mot[i] == '\0'){break;}
        std::cout << mot[i] << "\t" << std::hex << static_cast<int>(mot[i]) << std::endl;
    }
}


//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
void chaine::affichageEnDecimal(const std::string &mot) {
    unsigned long long int MAX = chaine::compterCaractere(mot);

    for (int i = 0; i<MAX; i++){
        if (mot[i] == '\0'){break;}
        std::cout << mot[i] << "\t" << std::dec << static_cast<int>(mot[i]) << std::endl;
    }
}


//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
std::string chaine::mettreEnMajuscule(std::string mot) {
    unsigned long long int MAX = chaine::compterCaractere(mot);

    for (int i = 0; i<MAX; i++){
        if (mot[i] == '\n'){break;}
        mot[i] = static_cast<char>(toupper(mot[i]));
    }
    return std::__cxx11::string(mot);
}


//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
std::string chaine::mettreEnMinuscule(std::string mot) {
    unsigned long long int MAX = chaine::compterCaractere(mot);

    for (int i = 0; i<MAX; i++){
        if (mot[i] == '\n'){break;}
        mot[i] = static_cast<char>(tolower(mot[i]));
    }
    return std::__cxx11::string(mot);
}


//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
std::string chaine::transformerMinMaj(std::string mot) {
    int dif = 'a' - 'A';

    for (int i = 0; i < compterCaractere(mot); i++){
        mot[i] -= (mot[i] >= 'a' && mot[i] <= 'z') ? dif : -dif;
    }
    return std::__cxx11::string(mot);
}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
std::string chaine::retournerMot(std::string mot) {

    char tmp;
    for (int i = 0; i < compterCaractere(mot)/2; i++){
        tmp = mot[i];
        mot[i] = mot[compterCaractere(mot) - 1 - i];
        mot[compterCaractere(mot) - 1 - i] = tmp;
    }
    mot[compterCaractere(mot)] = '\0';
    return std::__cxx11::string(mot);
}


//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
int chaine::rechercherCaractereG(const std::string &mot, char cara) {
    for (int i = 0; i < compterCaractere(mot);i++){
        if (mot[i] == cara){return i + 1;}
    }
    //sinon
    return -1;
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
int chaine::rechercherCaractereD(const std::string &mot, char cara) {
    for (auto i = static_cast<int>(compterCaractere(mot) - 1); i >= 0; i--){
        if (mot[i] == cara){return static_cast<int>(compterCaractere(mot) - i);}
    }
    //sinon
    return -1;
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
int chaine::estPalindrome(const std::string &mot) {
    // impair et mot retourne = mot
    return (compterCaractere(mot)%2 ==1 && comparerChaine(mot, retournerMot(mot)) == 0) ? 0 :-1;

    return 0;
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
int chaine::comparerChaine(const std::string &mot1, const std::string &mot2) {
    //Test si les mot ont la meme taille
    unsigned long long int long_mot1 = compterCaractere(mot1);
    unsigned long long int long_mot2 = compterCaractere(mot2);
    if (long_mot1>long_mot2){
        return 1;
    }
    else if (long_mot2 >long_mot1){
        return -1;
    }
    else{
        for (int i = 0; i < compterCaractere(mot1);i++){
            if (mot1[i] == mot2[i]){continue;}
            return (mot1[i] < mot2[i])?-1:1;
        }
        //si pas de diff
        return 0;
    }
}