
#include "stdio.h"


// De aici incepe programul din main
void main() 
{
    // numar intreg
    int nr_intreg = 10;
    // caracter
    char caracter = 'a';
    // numar cu virgula
    double nr_virgula = 5.5;
    
    // structura - tii mai multe date legate unele de altele de ex data din calendar zi, luna, an.
    struct Data
    {
        int zi;
        int luna;
        int an;

    };

    struct Data astazi;

    astazi.zi = 30;
    astazi.luna = 1;
    astazi.an = 2022;



    // iti afiseaza in consola textul(poate afisa si numere %d)
    printf("Hello World!");

    // cisteste de la tastura un numar si afiseaza
    // declaram un numar intreg si il intializam cu 0
    int numar_tastatura = 0;
    printf("\n Introdu un numar intreg: \n");
    scanf("%d", &numar_tastatura);
    printf("Caracterul de la tastura este: %d \n", numar_tastatura);

    // Sa asteptam in consola deschisa
    getchar();
}
