/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TD2 A : Structure de Control
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
    printf("   TD 02 - A : Structure de Control\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (1 a 4):\n(Tape CTRL+C pour quitter le programme)\n");
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
    case 4 : ex4(); break;
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

void ex1 (void){
    // 1.
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);

    // 2.
    int nbmin;

    // 3.
    if (a>b){
        nbmin = b;
    }
    else{
        nbmin = a;
    }

    // 4.
    printf("valeur minimale : %d\n", nbmin);
}

// Code strictement copié du TP01 exercice 05 par Gauthier Germain
void ex2 (void){
    int a, b, c;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    printf("Le plus grand entier entre %d, %d et %d est : %d\n", a, b, c, (a>b && a>c)?a:((b>c && b>a)?b:c));
}
void ex3 (void){
    int age;
    printf("age= ");
    scanf("%d", &age);
    (age < 18)? printf("ne peut pas voter\n") : printf("peut voter\n") ;
    }
void ex4 (void){
    char* chiffre[10] = {"zero", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf"};
    int n;
    printf("chiffre= ");
    scanf("%d", &n);
    printf("le chiffre saisi est : %s\n", chiffre[n] );
}
