/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TP6 : Chaines de caracteres, pointeurs
*/

////////////////////////////////////////
//////////////// HEADER ////////////////
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//string.h inclus juste pour la fonction strcpy()
#include<string.h>

//Fonctions pour accéder aux différents exercices
//Il s'agit simplement de tester les fonctions
//implémentées dans "tableaux.c" et "pointeurs.c"
#include "exos.h"

//Fonctions liés à la manipulation de tableaux
//(Exercices 1 à 13 + 20)
#include "tableaux.h"


//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (int argc, char *argv[]) {
    int num = -1;
    printf("  TP6 Bonus : Tableaux et pointeurs\n");
    while (num != 0) {
        printf("Tape le numero de l'exercice voulu (1 a 11):\n(Tape 0 pour quitter le programme)\n");
        scanf("%d", &num);
        //Rentre dans les fonctions exercices
        choix_ex(num);
        printf("Exercice numero %d fini!\n\n", num);
    }
    return 0;
}

