//
// Created by Gauthier Germain (https://github.com/ax-IO)
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "exos.h"
int MAX = 100;
#include "tableaux.h"

#define DEMANDE_TAB_DOUBLE() printf("Nombre de cases du tableau ? "); \
                            int nb;\
                            scanf("%d", &nb); \
                            double tab[nb]; \
                            for (int i = 0; i<nb; i++){printf("Element numero %d (sur %d) \n", i+1, nb);\
                            suppr_retr_lign(); \
                            scanf("%lf", &tab[i]);}

#define DEMANDE_CHAINE_CAR()  char mot[MAX]; \
                            printf("Saisis un mot... "); \
                            suppr_retr_lign(); \
                            fgets(mot, MAX, stdin); \
                            strcpy(mot, mot_sans_backslash_n(mot));


void suppr_retr_lign (void){
// nettoie le buffer par precaution
    while (getchar() != '\n');
}

//Retourne le mot SANS le "\n"
char* mot_sans_backslash_n (char* mot){
    for (int i = 0; i < MAX; i++){
        if (mot[i] == '\n'){
            mot[i] = '\0';
            break;
        }
        //else {continue;}
    }
    return mot;
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
        case 9 : ex9(); break;
        case 10 : ex10(); break;
        case 11 : ex11(); break;
        case 12 : ex12(); break;
        case 13 : ex13(); break;

        case 20 : ex20(); break;
        default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
void ex1 (void){
    DEMANDE_TAB_DOUBLE();
    printf("La moyenne des %d nombres stockes est : %lf \n", nb, moyenne(tab, nb));
}

void ex2 (void){
    DEMANDE_TAB_DOUBLE();
    printf("L’indice du premier element strictement negatif parmi les %d premiers elements du tableau est : %d \n", nb, indice_premier_negatif(tab, nb));
}

void ex3 (void){
    DEMANDE_TAB_DOUBLE();
    printf("La valeur du plus grand des %d premiers elements du tableau est : %lf\n", nb, valeur_plus_grand(tab, nb));
}

void ex4 (void){
    DEMANDE_TAB_DOUBLE();
    printf("L'indice du plus grand des %d premiers elements du tableau est : %d \n", nb, indice_plus_grand(tab, nb));
}

void ex5 (void){
    DEMANDE_TAB_DOUBLE();
    printf("La resistance equivalente de %d resistances en parallele est : %lf\n", nb, resistance(tab, nb));
}

void ex6 (void){
    DEMANDE_CHAINE_CAR();
    printf("La chaine \"%s\" correspond a l'entier : %d\n", mot, chaine_vers_entier(mot));
}

void ex7 (void){
    DEMANDE_CHAINE_CAR();
    printf("La chaine \"%s\" retournee correspond a : %s\n", mot, miroir(mot));
}

void ex8 (void){
    DEMANDE_CHAINE_CAR();
    printf("Nombre de repetition de chaque caractere ? ");
    int nombre;
    scanf("%d", &nombre);
    repete(mot, nombre);
}

void ex9 (void){
    DEMANDE_CHAINE_CAR();
    printf("La chaine \"%s\" en majuscule : %s\n", mot, majuscule(mot));
}

void ex10 (void){
    //première chaîne : mot
    DEMANDE_CHAINE_CAR();

    //deuxième chaine : mot2
    char mot2[MAX];
    printf("Saisis un deuxième mot... ");
    suppr_retr_lign();
    fgets(mot2, MAX, stdin);
    strcpy(mot2, mot_sans_backslash_n(mot2));

    (debute_par(mot, mot2) == 1)? printf("La premiere chaine (%s) commence par la seconde (%s)\n", mot, mot2): printf("La premiere chaine (%s) ne commence pas par la seconde (%s)\n", mot, mot2);
}

void ex11 (void){
    //première chaîne : mot
    DEMANDE_CHAINE_CAR();

    //deuxième chaine : mot2
    char mot2[MAX];
    printf("Saisis un deuxième mot... ");
    suppr_retr_lign();
    fgets(mot2, MAX, stdin);
    strcpy(mot2, mot_sans_backslash_n(mot2));

    if (presence(mot, mot2) != -1){
        printf("la deuxieme chaine (%s) est presente dans la premiere (%s) en position numero %d\n", mot2, mot, presence(mot, mot2));
    }
    else{
        printf("la deuxieme chaine (%s) n'est pas presente dans la premiere (%s)\n", mot2, mot);
    }
}

void ex12 (void){
    DEMANDE_CHAINE_CAR();

    char cara;
    printf("Saisis un caractere dont tu veux chercher l'occurence... ");
    suppr_retr_lign();
    scanf("%c", &cara);
    printf("%c apparait %d fois dans %s\n", cara, compte(cara, mot), mot);
}

void ex13 (void){
    //chaine de caractere mot
    DEMANDE_CHAINE_CAR();

    //2 caracteres : cara_c et cara_r
    char cara_c, cara_r;
    printf("Saisis un caractere present dans le mot %s... ", mot);
    suppr_retr_lign();
    scanf("%c", &cara_c);

    printf("Par quel caractere veut-tu remplacer %c ? ", cara_c);
    suppr_retr_lign();
    scanf("%c", &cara_r);

    printf("Chaine obtenue : %s\n", cherche_remplace(cara_c, cara_r, mot));
}

void ex20 (void){

}