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

//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    int num;
    printf("  TP 03 : Variables et Operateurs\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (1 a 5):\n(Tape CTRL+C pour quitter le programme)\n");
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
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

void ex1 (void){
    int age;
    printf("age? ");
    scanf("%d", &age);
    (age>=18)?printf("Vous etes majeur! \n"):printf("Vous etes mineur! \n");
}


void ex2 (void){
    int n;
    printf("Entrez entier (negatif): ");
    scanf("%d", &n);
    if (n < 0){n=-n;}
    printf("la valeur absolue est %d \n", n);
}
void ex3 (void){
    int note;
    printf("quelle est votre note ? ");
    scanf("%d", &note);
    if (note<8){printf("Ajourne !\n");}
    else if (note>10){printf("Admis!\n");}
    else{printf("Rattrapage! \n");}
}

void ex4 (void){
    int montant;
    printf("Quel est le montant des dommages? ");
    scanf("%d", &montant);
    float franchise = 0.1 * montant;
    franchise = (franchise<4000)? franchise : 4000;
    printf("Montant a rembousrser = %f\n Franchise = %f\n", montant - franchise, franchise);
}

void ex5 (void){
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);

    (a == b)? printf("Les valeurs sont les memes ! \n") : printf("Les valeurs sont distinctes ! \n") ;
}

