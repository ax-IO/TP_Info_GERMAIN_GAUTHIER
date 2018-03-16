/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TP 03 : Variables et Operateurs
*/

////////////////////////////////////////
//////////////// HEADER ////////////////
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

//////DECLARATION DE FONCTIONS////////////

void choix_ex (int num);
void ex1 (void);
void ex2 (void);
void ex3 (void);

//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    int num;
    printf("  TP 03 : Variables et Operateurs\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (1 a 3):\n(Tape CTRL+C pour quitter le programme)\n");
        scanf("%d", &num);
        //Rentre dans les fonctions exercices
        choix_ex(num);
        printf ("Exercice numero %d fini!\n\n", num);
    }
    return 0;
}

///////////////////////////////////////
/////////// DEFINITION ////////////////
/////////////// DES ///////////////////
//////////// FONCTIONS ////////////////
///////////////////////////////////////

void choix_ex (int num){
switch (num){
    case 1 : ex1(); break;
    case 2 : ex2(); break;
    case 3 : ex3(); break;
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

void ex1 (void){
    float f;
    printf("Saisis nombre :");
    scanf("%f", &f);
    printf("le nombre est : %0.4f\n", f);
}


void ex2 (void){
    int f, g, h;
    printf("Saisis 3 valeurs entieres:\n");
    printf("1ere :");
    scanf("%d", &f);
    printf("2eme :");
    scanf("%d", &g);
    printf("3eme :");
    scanf("%d", &h);
    printf("la moyenne est %0.4f\n", (1.0*(f+g+h))/3);
}

void ex3 (void){
    float lon, lar;
    printf("Longueur du rectangle:");
    scanf("%f", &lon);
    printf("Longueur du rectangle:");
    scanf("%f", &lar);
    printf("La surface du rectangle est : %0.3f\n", lon*lar);
}
