/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TP5 : Les Tableaux
Partie 1/2 : Tableau a une dimension
*/

////////////////////////////////////////
//////////////// HEADER ////////////////
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#include<string.h>
#define MAXI 150
#define NB_ETU 5
//////DECLARATION DE FONCTIONS////////////
void afficherNotes (float TAB[]);
float minimumNote (float TAB[]);
float maximumNote (float TAB[]);
float calculeMoyenne (float TAB[]);
float calculeVariance (float TAB[]);
float calculeEcartType (float TAB[]);
int rechercherValeur (float TAB[], float val);

//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    printf("  TP 05-a : Tableau a une dimension\n");
    // Declaration + Def. Tableau test
    float tab[NB_ETU] = {12.0, 13.5, 8.5, 14.7, 6.0};

    printf("Partie Obligatoire : \n\n");
    //1.
    afficherNotes(tab);
    //2.
    printf("\nLa note la plus basse est %0.2f\n", minimumNote(tab));
    //3.
    printf("La note la plus haute est %0.2f\n", maximumNote(tab));
    //4.
    printf("\nLa Moyenne est : %0.3f\n", calculeMoyenne(tab));
    //5.
    printf("La Variance est : %0.3f\n", calculeVariance(tab));
    //6.
    printf("L'Ecart-Type est : %0.3f\n", calculeEcartType(tab));
    //7.
    float f;
    printf("\nValeur a rechercher ? ");
    scanf("%f", &f);
    (rechercherValeur(tab, f) == -1 )? printf("La valeur %0.2f n'a pas ete trouvee \n", f):printf("La Valeur %0.2f a ete trouve en position %d\n", f, rechercherValeur(tab, f));


    printf("\nPartie Optionnelle : \nA faire...\n\nFin Exercice\n");
    return 0;
}



///////////////////////////////////////
/////////// DEFINITION ////////////////
/////////////// DES ///////////////////
//////////// FONCTIONS ////////////////
///////////////////////////////////////

/*  1.  */

void afficherNotes (float TAB[]){
    for (int i = 0; i < NB_ETU; i++){
        printf("Note numero %d sur %d : \t %0.2f\n", i+1, NB_ETU, TAB[i]);
    }
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
/*  2.  */
float minimumNote (float TAB[]){
    float min = 20;
    for (int i = 0; i < NB_ETU; i++){
        if (TAB[i] < min){min = TAB[i];}
    }
    return min;
}


//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
/*  3.  */
float maximumNote (float TAB[]){
    float max = 0;
    for (int i = 0; i < NB_ETU; i++){
        if (TAB[i] > max){max = TAB[i];}
    }
    return max;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
/*  4.  */
float calculeMoyenne (float TAB[]){
    float moyenne = 0.0;
    for (int i = 0; i < NB_ETU; i++){
        moyenne += TAB[i];
    }
    return moyenne/NB_ETU;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
/*  5.  */
float calculeVariance (float TAB[]){
    float variance = 0;
    for (int i = 0; i < NB_ETU; i++){
            variance += pow(TAB[i] - calculeMoyenne(TAB), 2);
        }
    return variance/NB_ETU;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
/*  6.  */
float calculeEcartType (float TAB[]){
    return sqrt(calculeVariance(TAB));
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
/*  7.  */
int rechercherValeur (float TAB[], float val){
int pos;
for (int i = 0; i< NB_ETU; i++){
        if (TAB[i] == val){return i+1;}
    }
//Si non trouve
return -1;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
