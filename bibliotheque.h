#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
// Définition d'une fonction de permutation de deux entiers.
void permutation(int *a, int *b);
// Définition d'une fonction d'affichage d'un tableau.
void displayTable();
// Définition d'une fonction de résolution d'une équation du second degré.
double equationSecondDeg(int a, int b, int c);

int  estPremier(int n);
 typedef struct
 {
    float x;
    float y;
 }Point;
float  distance(Point p1, Point p2);
#endif