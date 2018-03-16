/*
Nom : Germain
Prenom : Gauthier
L1-MP 2017-2018
TP1.c
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
    printf("Hello World\n");
    printf("Saisis ton prenom : \n");
    char prenom[]="";
    scanf("%s", prenom);
    printf("Hello %s \n", prenom);
}

void ex2 (void){
    int a, b, tmp;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("Avant Echange : \n a = %d \t b = %d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("Apres Echange : \n a = %d \t b = %d\n", a, b);
}
void ex3 (void){
    float a, b;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("Le produit de %0.2f et %0.2f est %0.2f\n", a, b, a * b);
}
void ex4 (void){
    int a;
    printf("a= ");
    scanf("%d", &a);
    (a%2==0) ? printf("%d est pair !\n", a): printf("%d est impair !\n", a) ;
}
void ex5 (void){
    int a, b, c;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    printf("Le plus grand entier entre %d, %d et %d est : %d\n", a, b, c, (a>b && a>c)?a:((b>c && b>a)?b:c));
}
void ex6 (void){
    int a, b, c, d;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    printf("d= ");
    scanf("%d", &d);
    int max, min;
    max = (a>b) ? a : b ;
    max = (max>c) ? max : c ;
    max = (max>d) ? max : d ;
    printf("Le plus grand : %d\n", max);

    min = (a<b) ? a : b ;
    min = (min<c) ? min : c ;
    min = (min<d) ? min : d ;
    printf("Le plus petit : %d\n", min);
}

void ex7 (void){
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    if (b > a){
        int tmp;
        tmp = a ;
        a = b;
        b = tmp;
    }
    printf("%d / %d = %0.2f\n(quotient entier = %d\treste = %d)\n", a, b, 1.0*a/b,a/b, a%b);
}
void ex8 (void){
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    char op = 0;
    printf("Operation voulue ? ( \'+\', \'-\', \'*\', \'/\' ou \'%%\' )\n");
    scanf(" %c", &op);
    switch (op){
        case '+': printf("%d + %d = %d \n", a, b, a+b) ;break;
        case '-': printf("%d - %d = %d \n", a, b, a-b) ;break;
        case '*': printf("%d * %d = %d \n", a, b, a*b) ;break;
        case '/': printf("%d / %d = %0.2f \n", a, b, 1.0*a/b) ;break;
        case '%': printf("%d %% %d = %d \n", a, b, a%b) ;break;
        default: printf("Erreur : Operateur non reconnu !\n");
    }
}
