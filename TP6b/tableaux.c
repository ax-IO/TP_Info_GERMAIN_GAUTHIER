//
// Created by Gauthier Germain (https://github.com/ax-IO)
//


#include<stdio.h>
#include<stdlib.h>

#include "tableaux.h"
#include "exos.h"

double moyenne(double t[], int n) {
    double somme = 0;
    for (int i = 0; i<n; i++){
        somme += t[i];
    }
    return somme/n;
}

int indice_premier_negatif(double t[], int n) {
    for (int i = 0; i<n; i++){
        if (t[i] < 0){ return i;}
    }
    return -1;
}

double valeur_plus_grand(double t[], int n) {
    double grand = 0;
    for (int i = 0; i<n; i++){
        if (t[i] > grand){grand = t[i];}
    }
    return grand;
}

int indice_plus_grand(double *t, int n) {
    for (int i = 0; i < n; i++) {
        if (valeur_plus_grand(t, n) == t[i]){return i;}
    }
    return -1;
}


double resistance(double r[], int n) {
    double R_i = 0;
    for (int i = 0; i < n; i++) {
        R_i += 1 / r[i];
    }
    return 1/(R_i);
}

int chaine_vers_entier(char *s) {
    return atoi(s);
}

char *miroir(char *s) {
    int n = (longueur_chaine(s) % 2 == 0)? longueur_chaine(s)/2 : (longueur_chaine(s)/2) + 1;
    for (int i = 0; i < n ; i++){
        s[i] = s[(n-1)-i];
    }
    return s;
}

void repete(char *s, int n) {
    for (int j = 0; j < longueur_chaine(s); j++) {
        for (int i = 0; i < n; i++) {
            printf("%c", s[i]);
        }
    }
}

char *majuscule(char *s) {
    for (int i = 0; i < longueur_chaine(s); i++) {
        s[i] += 'A' - 'a';
    }
    return s;
}

int debute_par(char *chaine1, char *chaine2) {
    for (int j = 0; j < longueur_chaine(chaine2); j++) {
        if (chaine1[j] != chaine2[j]){ return 0;}
    }
    return 1;
}

int presence(char *chaine1, char *chaine2) {
    gochaine1:
    for (int i = 0; i < longueur_chaine(chaine1); i++) {
        for (int j = 0; j < longueur_chaine(chaine2); j++) {
            if (chaine1[j] != chaine2[j]) { goto gochaine1; }
        }
        return i;
    }
    return -1;
}

int compte(char c, char *s) {
    int n = 0;
    for (int i = 0; i < longueur_chaine(s); i++) {
        if (s[i] == c){n++;}
    }
    return n;
}

char *cherche_remplace(char c, char r, char *s) {
    for (int i = 0; i < longueur_chaine(s); i++) {
        if (s[i] == c){s[i] = r;}
    }
    return s;
}

double *copie(double *destination, double *source, int n) {
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
    return destination;
}

int longueur_chaine(const char *s) {
    for (int i = 0; i < MAX; i++) {
        if (s[i] == '\0'){
            return i+1;
        }
    }
    return -1;
}
