/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TP6 : Chaines de caracteres, pointeurs
*/

////////////////////////////////////////
//////////////// HEADER ////////////////
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//string.h inclus juste pour la fonction strcpy()
#include<string.h>

#define MAX 100

#define DEMANDE() char mot[MAX]; \
                printf("Saisis un mot : "); \
                suppr_retr_lign(); \
                fgets(mot, MAX, stdin); \
                strcpy(mot, mot_sans_backslash_n(mot));

//////DECLARATION DE FONCTIONS////////////

void choix_ex (int num);
void suppr_retr_lign (void);
char* mot_sans_backslash_n (char* mot);
void ex1 (void);
int compterCaractere(char tab[]);
void ex2 (void);
void affichageEnHexadecimal(char tab[]);
void ex3 (void);
void affichageEnDecimal(char tab[]);
void ex4 (void);
char* mettreEnMajuscule (char tab[]);
void ex5 (void);
char* mettreEnMinuscule (char tab[]);
void ex6 (void);
char* transformerMinMaj (char* mot);
void ex7 (void);
char* retournerMot (char* mot);
void ex8 (void);
int rechercherCaractereG (char* mot , char cara);
void ex9 (void);
int rechercherCaractereD (char* mot , char cara);
void ex10 (void);
int estPalindrome (char* mot);
void ex11 (void);
int comparerChaine (char* mot1, char* mot2);
//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    int num;
    printf("  TP6 : Chaines de caracteres, pointeurs\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (1 a 11):\n(Tape CTRL+C pour quitter le programme)\n");
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
    case 9 : ex9(); break;
    case 10 : ex10(); break;
    case 11 : ex11(); break;
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

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
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex1 (void){
    DEMANDE();
    printf("Le nombre de caracteres de %s est %d\n", mot, compterCaractere(mot));
}
int compterCaractere(char tab[]){
    int nombre = 0;
    for (int i = 0; i<MAX; i++){
            if (tab[i] == '\0'){break;}
            nombre++;
    }
    return nombre ;
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex2 (void){
    DEMANDE();
    printf("En Hexadecimal %s correspond a : \n", mot);
    affichageEnHexadecimal(mot);
}
void affichageEnHexadecimal(char tab[]){
    for (int i = 0; i<MAX; i++){
            if (tab[i] == '\0'){break;}
            printf("%c\t%2x\n", tab[i], tab[i]);
    }
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex3 (void){
    DEMANDE();
    printf("En Decimal %s correspond a : \n", mot);
    affichageEnDecimal(mot);
}

void affichageEnDecimal(char tab[]){
    for (int i = 0; i<MAX; i++){
        if (tab[i] == '\0'){break;}
        printf("%c\t%d\n", tab[i], tab[i]);
    }
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex4 (void){
    DEMANDE();
    printf("en majuscule : %s\n", mettreEnMajuscule(mot));
}

char* mettreEnMajuscule (char tab[]){
    for (int i = 0; i<MAX; i++){
        if (tab[i] == '\n'){break;}
        tab[i] = toupper(tab[i]);
    }
    return tab;
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex5 (void){
    DEMANDE();
    printf("en minuscule : %s\n", mettreEnMinuscule(mot));
}

char* mettreEnMinuscule (char tab[]){
    for (int i = 0; i<MAX; i++){
    if (tab[i] == '\n'){break;}
    tab[i] = tolower(tab[i]);
    }
    return tab;
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex6 (void){
    DEMANDE();
    printf("le mot avec maj/min inverses : %s\n", transformerMinMaj(mot));
}

char* transformerMinMaj (char* mot){
    int dif = 'a' - 'A';

    for (int i = 0; i < compterCaractere(mot); i++){
        mot[i] -= (mot[i] >= 'a' && mot[i] <= 'z') ? dif : -dif;
    }
return mot;
}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex7 (void){
    DEMANDE();
    printf("a l'envers : %s \n", retournerMot(mot));
}

char* retournerMot (char* mot){
    char tmp;
    for (int i = 0; i < compterCaractere(mot)/2; i++){
        tmp = mot[i];
        mot[i] = mot[compterCaractere(mot) - 1 - i];
        mot[compterCaractere(mot) - 1 - i] = tmp;
    }
    mot[compterCaractere(mot)] = '\0';
    return mot;
}

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex8 (void){
    DEMANDE();
    printf("Caractere a rechercher : ");
    char c ;
    scanf(" %c", &c);
    printf("la premiere occurence de %c  n partant de la gauche est a la position numero %d\n", c, rechercherCaractereG(mot, c));
}

int rechercherCaractereG (char* mot, char cara){
    for (int i = 0; i < compterCaractere(mot);i++){
        if (mot[i] == cara){return i + 1;}
    }
    //sinon
    return -1;
}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex9 (void){
    DEMANDE();
    printf("Caractere a rechercher : ");
    char c ;
    scanf(" %c", &c);
    printf("la premiere occurence de %c en partant de la droite est a la position numero %d\n", c, rechercherCaractereD(mot, c));
}

int rechercherCaractereD (char* mot, char cara){
    for (int i = compterCaractere(mot) -1; i>=0; i--){
        if (mot[i] == cara){return compterCaractere(mot) - i ;}
    }
    //sinon
    return -1;
}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex10 (void){
    DEMANDE();
    (estPalindrome(mot) == -1)? printf("n'est pas un palindrome !\n"): printf("est un palindrome\n");
}

int estPalindrome (char* mot){
    // impair et mot retourne = mot
    return (compterCaractere(mot)%2 ==1 && comparerChaine(mot, retournerMot(mot)) == 0) ? 0 :-1;
}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

void ex11 (void){
    DEMANDE();

    //Demande un deuxième mot (pas utilisation de la macro DEMANDE)
    char mot2[MAX];
    printf("Saisis un deuxieme mot : ");
    fgets(mot2, MAX, stdin);
    strcpy(mot2, mot_sans_backslash_n(mot2));
    //Affichage comparaison des chaînes
    switch (comparerChaine(mot, mot2)){
    case -1 :
        printf("%s < %s\n", mot, mot2);
        break;
    case 0 :
        printf("%s = %s\n", mot, mot2);
        break;
    case 1 :
        printf("%s > %s\n", mot, mot2);
        break;
    default :
        printf("Erreur ! \n");
    }
}

int comparerChaine (char* mot1, char* mot2){
    //Test si les mot ont la meme taille
    int long_mot1 = compterCaractere(mot1);
    int long_mot2 = compterCaractere(mot2);
    if (long_mot1>long_mot2){
        return 1;
    }
    else if (long_mot2 >long_mot1){
        return -1;
    }
    else{
    for (int i = 0; i < compterCaractere(mot1);i++){
        if (mot1[i] == mot2[i]){continue;}
        return (mot1[i] < mot2[i])?-1:1;
    }
    //si pas de diff
    return 0;
    }
}
