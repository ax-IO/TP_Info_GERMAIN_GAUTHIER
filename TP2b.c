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
void ex5 (void);
void ex6 (void);
void ex7 (void);
void ex8 (void);

//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    int num;
    printf("   TD 02 - B : Les Boucles\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (1 a 8):\n(Tape CTRL+C pour quitter le programme)\n");
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
    case 5 : ex5(); break;
    case 6 : ex6(); break;
    case 7 : ex7(); break;
    case 8 : ex8(); break;
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

void ex1 (void){
    // a.
    for (int i = 1; i<=10; i++){
        printf("%d\n", i);
    }
    printf("\n");
    // b.
    for (int i = 20; i>=1; i--){
    printf("%d ", i);
    if (i%3 == 0){printf("\n");}
    }
    printf("\n");
}


void ex2 (void){
    unsigned int somme = 0;
    for (int i = 1; i<=100; i++){
        somme += i;
    }
    printf("Somme = %u\n", somme );
}
void ex3 (void){
    unsigned int somme = 0;
    int lim;
    printf("indiquez la limite de la somme :\n");
    scanf("%d", &lim);
    for (int i = 1; i<=lim; i++){
        somme += i;
    }
    printf("Somme = %u\n", somme );
}
void ex4 (void){
    int n;
    printf("Saisissez un nombre :\n");
    scanf("%d", &n);
    printf("A l'envers !\n");

    do{
        printf("%d", n%10);
        n/= 10;
    }
    while(n>=10);
    printf("%d\n", n%10);
}

void ex5 (void){
    char c;
    int gagne = 0;
    for (int i = 1; i<=3; i++){
        printf("Tapez '0' (%d essai sur 3)\n", i);
        scanf(" %c", &c);
        if (c == '0'){
            printf("C'est gagne !\n");
            gagne ++;
            break;
        }
    }
    if (!gagne){printf("C'est perdu !\n");}
}
void ex6 (void){
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("%d ^ %d = ", a, b);

    unsigned long resultat = a ;
    while(b>1){
        resultat *= a;
        b--;
    }
    if (b == 0){resultat = 1;}
    printf("%lu\n", resultat);
    }

void ex7 (void){
    // a.
    for (int i = 1; i<=5; i++){
        printf("Affiche 10 fois %d\n", i);
    }
    printf("\n");
    //b.
    for (int i = 1; i <= 5; i++){
        for (int j = 0; j < 10; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");
}
void ex8 (void){
    int base;
    printf("Nombre d'etoiles a la base du triangle (impair) ?\n");
    scanf("%d", &base);
    for (int i = 1; i <= base; i+=2){
            // ESPACES AVANT
        for (int j = 0; j < (base - i) / 2; j++){
            printf(" ");
        }
            // ETOILES
        for (int j = 0; j < i; j++){
            printf("*");
        }
            // ESPACES APRES
        for (int j = 0; j < (base - i) / 2; j++){
            printf(" ");
        }

            // LIGNE SUIVANTE
        printf("\n");
    }
}
