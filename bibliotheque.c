#include "bibliotheque.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}
//Définition d'une fonction de permutation de deux entiers.
void permutation(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
#define ARRAY_SIZE 5
void displayTable()
{
    int array[ ARRAY_SIZE ];
array[0] = 1;
array[1] = 2;
array[2] = 4;
array[3] = 8;
array[4] = 16;
int i;
for(i=0; i<ARRAY_SIZE; i++ ) {
printf( "array[%d] == %d\n", i, array[i] );
}
}

double equationSecondDeg(int a, int b, int c)
{
    printf("Entrer le premier coefficient: ");
    scanf("%d",&a);
    printf("Entrer le second coefficient: ");
    scanf("%d",&b);
    printf("Entrer le troisième coefficient: ");
    scanf("%d",&c);
    int delta = b*b - 4*a*c;
    if (delta < 0)
    {
        printf("Pas de solution reelle.\n");
        return 0;
    }
    else if (delta == 0)
    {
        double x = -b / (2.0 * a);
        printf("Une solution reelle double: x = %.2f\n", x);
        return x;
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2.0 * a);
        double x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Deux solutions reelles: x1 = %.2f, x2 = %.2f\n", x1, x2);
        return 0;
    }
    
}


int  estPremier(int n)
{
    if (n <= 1) 
        return 0;
    int i = 2;
    for (i=2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // n est divisible par i, donc n n'est pas premier
        }
    }
    return n; // n est premier
}

float  distance(Point p1, Point p2)
{
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}