/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TP7 : Listes chainees
*/

////////////////////////////////////////
//////////////// HEADER ////////////////
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define MAX 100   //taille tableau
#define NOMBRE 42 //valeur arbitraire

//////DECLARATION DE STRUCTURES //////////
typedef struct Element {
int valeur;
struct Liste *next;
}Element;

//Liste équivaut à llist càd Element*

typedef Element* Liste;
//Création du type "liste chainé" (pointeur vers Liste)
//typedef Liste* lchain;
//////DECLARATION DE FONCTIONS////////////

void choix_ex (int num);
void ex1 (void);
Liste AlloueCellule(int val);
Liste InsereEnTete(Liste p, int val);
Liste LireListe(Liste p);
void AfficheListe(Liste p);
void AfficheInvListe(Liste p);
void ex2 (void)
Recherche(Liste p, int val);
Minimum;
Dernier;
void ex3 (void);
Liste InsereEnFin(Liste *p, int val);
Liste InsereApres(Liste p, int val, int apres);
void ex4 (void);
void ex5 (void);
void ex6 (void);
void ex7 (void);
//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    int num;
    printf("  TP7 : Listes chainees\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (1 a 7):\n(Tape CTRL+C pour quitter le programme)\n");
        scanf("%d", &num);
        while (getchar() != '\n');
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
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex1 (void){
    //test est une liste chainee qui ne contient pas d'elements
    Liste test = NULL;

    //1.
    if (AlloueCellule(NOMBRE)==NULL){printf("Erreur : Plus d'espace disponible lors de la tentatiove d'allocation d'espace d'une nouvelle cellule !\n");}
    else{printf("L'adresse de la nouvelle cellule cree est %p\n", (void*)&AlloueCellule(NOMBRE));}
    //2.
    if (InsereEnTete(test, NOMBRE+1)==NULL){printf("Erreur lors de l'insertion en en-tete!\n");}
    else{printf("L'adresse de la nouvelle cellule cree est %p\n", (void*)&InsereEnTete(test, NOMBRE));}

    //3.
    if (LireListe(NULL)==NULL){printf("Erreur lors de l'insertion en en-tete!\n");}
    else{printf("L'adresse de la nouvelle cellule cree est %p\n", (void*)&InsereEnTete(test, NOMBRE));}

    //4.

    //5.
}

Liste AlloueCellule(int val){
// Alloue espace nouvelle cellule
Liste new = malloc(sizeof(Liste));

//Verifie si il y a de l'espace dispo
if (new->next == NULL){
    return NULL;
}
    //Affecte valeur
    new->valeur = val;
    new->next=NULL;
    return new;
}

Liste InsereEnTete(Liste p, int val){
    Liste entete = AlloueCellule(val);
    entete->next = p;
    if (entete == NULL){
        return NULL
    }
    return entete;
}

// Ex3 : on appele cette fonction creeliste !!!
Liste LireListe(Liste p){
    while ()
}
void AfficheListe(Liste p){
for (int i=0; )
}
void AfficheInvListe(Liste p){}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex2 (void){
}

Recherche(Liste p, int val){}
Minimum{}
Dernier{}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex3 (void){

}

Liste InsereEnFin(Liste *p, int val);
Liste InsereApres(Liste p, int val, int apres);

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex4 (void){

}


//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex5 (void){

}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex6 (void){

}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex7 (void){

}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
