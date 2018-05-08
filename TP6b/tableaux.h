//
// Created by Gauthier Germain (https://github.com/ax-IO)
//


#ifndef TP6B_TABLEAUX_H
#define TP6B_TABLEAUX_H

double moyenne (double t[], int n);
int indice_premier_negatif (double t[], int n);
double valeur_plus_grand (double t[], int n);
int indice_plus_grand (double t[], int n);
double resistance (double r[], int n);
int chaine_vers_entier (char *s);
char * miroir (char *s);
void repete (char *s, int n);
char * majuscule (char *s);
int debute_par (char * chaine1, char * chaine2);
int presence (char * chaine1, char * chaine2);
int compte (char c, char * s);
char * cherche_remplace (char c, char r, char * s);

double * copie (double * destination, double * source, int n);
int longueur_chaine (const char * s);
#endif //TP6B_TABLEAUX_H
