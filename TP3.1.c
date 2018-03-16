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
    int a;
    printf("Saisir valeur :\n");
    scanf("%d", &a);
    printf("Valeur = %d\n", a);
}


void ex2 (void){
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %0.2f\n", a, b, (1.0*a)/b);
    }

void ex3 (void){
    int a, b, tmp;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("AVANT : a = %d \t b= %d \n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("APRES : a = %d \t b= %d \n", a, b);
}
