/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TD2 B : Les Boucles
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
void ex4 (void);

//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    int num;
    printf("  TP 03 : Variables et Operateurs\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (1 a 4):\n(Tape CTRL+C pour quitter le programme)\n");
        scanf("%d", &num);
        //Rentre dans les fonctions exercices
        choix_ex(num);
        printf ("Exercice numero %d fini!\n", num);
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
    case 4 : ex4(); break;
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

void ex1 (void){
    char c = 'a';
    printf("Le code ASCII de %c est %d\n", c, c);
}

void ex2 (void){
    char c;
    printf("Saisir caractere :");
    scanf(" %c", &c);
    printf("le caractère suivant est : %c\n", c+1);
}
void ex3 (void){
    char c;
    printf("Saisir caractere en minuscule : ");
    scanf(" %c", &c);
    printf("le caractere en majuscule est est : %c\n", c-32);
}

void ex4 (void){
    for (int i =0; i<10; i++){
        printf("le code ASCII de %d est %d\n", i, i + '0');
    }
}
