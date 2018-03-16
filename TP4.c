/*
Nom : Germain
Prenom : Gauthier
https://github.com/ax-IO
L1-MP 2017-2018
TP4 B : Les Fonctions
*/

////////////////////////////////////////
//////////////// HEADER ////////////////
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#include<string.h>
#define NB_ETU 150
#define LONG_NOM 20

//////DECLARATION DE STRUCTURE////////////

typedef struct point {
float x;
float y;
}POINT;

typedef struct segment {
    POINT A;
    POINT B;
    float longueur;
}SEGMENT;

typedef struct etudiant{
int numeroEtudiant;
char prenom [LONG_NOM];
char nom [LONG_NOM];
float moyenne;
}ETUDIANT;

typedef struct classe{
ETUDIANT etu [NB_ETU];
float moyenne;
}CLASSE;

//////DECLARATION DE FONCTIONS////////////

void choix_ex (int num);
void ex0 (void);
int som5 (int a, int b, int c, int d, int e);
void ex1 (void);
int divise (int a, int b);
void ecrire_division (int a, int b);
int nb_div (int n);
int premier (int n);
void ex2 (void);
void ex3 (void);
float moy_clas (CLASSE cla, int n);
void ex5 (void);



//////////////////////////////////////////
////////////////// MAIN //////////////////
//////////////////////////////////////////
int main (void){
    int num;
    printf("  TP 04 : Fonctions et Structures\n");
    while(1){
        printf("Tape le numero de l'exercice voulu (0, 1, 3 ou 5):\n(Tape CTRL+C pour quitter le programme)\n");
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
    case 0 : ex0(); break;
    case 1 : ex1(); break;
    case 3 : ex3(); break;
    case 5 : ex5(); break;
    default : printf("Erreur : Numero exercice inconnu !\n");
    }
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void ex0 (void){
    int a, b, c, d, e;
    printf("donnez 5 entiers !\n");
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    printf("d= ");
    scanf("%d", &d);
    printf("e= ");
    scanf("%d", &e);
    printf("La somme de %d, %d, %d, %d et %d est :  %d\n", a, b, c, d, e, som5(a,b,c,d,e));
    }
int som5 (int a, int b, int c, int d, int e){
    return a+b+c+d+e;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void ex1 (void){
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("la foction divise renvoie %d lorque a= %d et b=%d\n", divise(a, b), a, b);
    printf("Test de la fonction ecrire_division : ");
    ecrire_division(a, b);
    printf("Test de la fonction nb_div : ");
    printf("Le nombre de diviseur de %d est :%d\n", a, nb_div(a));
    printf("Test de la fonction premier : ");
    printf("%d est premier ? %s\n", a, (premier(a) == 1)?"vrai\n":"faux\n");

    //5.
    printf("5. fonctions appellees : \n-main \n-divise \n-divise\n-premier\n-nb_div\n");
    }

//1.
int divise (int a, int b){
    return (a%b == 0)? 1 : 0;
}

//2.
void ecrire_division (int a, int b){
    (divise(a,b) == 1)? printf("%d divise %d\n", b, a): printf("%d ne divise pas %d\n", b, a) ;
}

//3.
int nb_div (int n){
int nombre = 0;
for (int i = 1; i<=n; i++){
        if (n%i==0){nombre++;}
    }
return nombre;
}

//4.
int premier (int n){
    return (nb_div(n) > 2)? 0 : 1;
}


//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void ex3 (void){
    // Test point
    POINT test_point;
    printf("abcisse : ");
    scanf("%f", &test_point.x);
    printf("ordonnee : ");
    scanf("%f", &test_point.y);

    printf("test abcisse : %0.2f\n", test_point.x);
    printf("test ordonee : %0.2f\n", test_point.y);

    // Test Segment
    POINT point_b;
    SEGMENT segment;

    printf("\nabcisse point B: ");
    scanf("%f", &point_b.x);
    printf("ordonnee point B : ");
    scanf("%f", &point_b.y);

    segment.A = test_point;
    segment.B = point_b;
    segment.longueur = sqrt((segment.B.x - segment.A.x)*(segment.B.x - segment.A.x) + (segment.B.y - segment.A.y)*(segment.B.y - segment.A.y));
    printf("segment = %0.2f\n", segment.longueur);
}


//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void ex5 (void){
    int nb_etu;
    printf("Combien d'etudiants voulez-vous creer dans votre classe ? ");
    scanf("%d", &nb_etu);
    while (getchar() != '\n');

    CLASSE cla ;    // Saisie de n etudiant
    for (int i = 0; i < nb_etu; i++){
        //NUMERO
        cla.etu[i].numeroEtudiant = i + 1;

        //PRENOM
        printf("\nprenom etudiant numero %d : ", cla.etu[i].numeroEtudiant);
        fgets(cla.etu[i].prenom, LONG_NOM, stdin);

        //NOM
        printf("nom etudiant numero %d : ", cla.etu[i].numeroEtudiant);
        fgets(cla.etu[i].nom, LONG_NOM, stdin);

        //MOYENNE
        printf("Moyenne : ");
        scanf("%f", &cla.etu[i].moyenne);
        while (getchar() != '\n');

    }
    printf("\n(Ex 6)\nLa moyenne de la classe est %0.3f \n\n", moy_clas(cla, nb_etu));
}

float moy_clas (CLASSE cla, int n){
    cla.moyenne = 0;
    for (int i = 0; i < n; i++){
        cla.moyenne += cla.etu[i].moyenne;
    }
    return cla.moyenne/n;
}

//ex 7 et 8 corriges !!

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
