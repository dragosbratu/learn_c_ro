
#include <stdio.h>
#include <stdlib.h>

struct stiva
{
    int nrmax;
    int varf;
    double *tab;
};

void intializare(int NumarMaxElemente, struct stiva *PointerCatreStivaMea) 
{
    // voi seta in stiva mea nr max elemente
    PointerCatreStivaMea->nrmax = NumarMaxElemente;

    // aloca spatiu si voi salva pointer catre acel spatiu
    PointerCatreStivaMea->tab = calloc(NumarMaxElemente, sizeof(double));

    // pentru ca nu am niciun element varful =0
    PointerCatreStivaMea->varf = 0;
}

void dealocare(struct stiva *PointerCatreStivaMea) 
{
    free(PointerCatreStivaMea->tab);
    PointerCatreStivaMea->varf = 0;
}

void afisare(struct stiva StivaCaSiParametru) 
{
    printf("In stiva avem %d farfurii \n", StivaCaSiParametru.varf);

    for (int index = 0; index < StivaCaSiParametru.nrmax; index++) 
    {
        printf("%f \n", StivaCaSiParametru.tab[index]);
    }

}

// 0 fals daca stiva nu este plina
// 1 advarat daca stiva este plina
int stiva_plina(struct stiva NumeStivaDeVerificat) 
{
    if (NumeStivaDeVerificat.varf == NumeStivaDeVerificat.nrmax-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// 0 fals daca stiva nu este goala
// 1 advarat daca stiva este goala
int stiva_goala(struct stiva NumeStivaGeorge) 
{
    if (NumeStivaGeorge.varf == 0) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void adauga_element(double element_de_bagat, struct stiva *PointerStivaMea) 
{
    // Adaug in tabloul din stiva mea la varful curent elementul
    PointerStivaMea->tab[PointerStivaMea->varf] = element_de_bagat;
    // Cresc cu o unitate pentru ca am adauga un element
    PointerStivaMea->varf++;
}


void copiere(struct stiva stiva_mea_de_la, struct stiva *pointer_catre_stiva_mea_catre)
{
    // aici nu imi dau seama daca se vrea copiere sau mutare asa ca o sa zic copiere cat mai e loc in ea

    for (int index_current = 0; index_current <= stiva_mea_de_la.varf; index_current++)
    {
        pointer_catre_stiva_mea_catre->tab[pointer_catre_stiva_mea_catre->varf] = stiva_mea_de_la.tab[index_current];
    }
}
void main() 
{

    struct stiva a;
    intializare(5, &a);

    printf("stiva a este: \n");
    afisare(a);
    printf("Stiva este 1 este goala 0 nu e goala : %d \n", stiva_goala(a));


    double nr_tastatura = 0.0;
    for (int i = 0; i < 5; i++) 
    {
        printf("Introdu un double \n");
        // ia de la tastura
        scanf("%lf", &nr_tastatura);
        // adauga in stiva
        adauga_element(nr_tastatura, &a);
    }
    afisare(a);


    struct stiva b;
    intializare(6, &b);
    printf("stiva b este: \n");
    afisare(b);
   
    getchar();
}


























//#include "stdio.h"
//#include <stdlib.h>
//
//
//struct stiva
//{
//    int nrmax; // numar maxim de elemente in stiva
//    int varf; // unde suntem acum in lista putem sa mergem maxim pana la <nrmax 
//    double *tab; // pointer catre array-ul creat cu malloc
//};
//
//
//void intializare(struct stiva *pointer_catre_stiva_mea, int nr_max) 
//{
//    pointer_catre_stiva_mea->varf = 0;
//    pointer_catre_stiva_mea->tab = malloc(nr_max);
//    pointer_catre_stiva_mea->nrmax = nr_max;
//}
//
//void dealocare(struct stiva *pointer_catre_stiva_mea)
//{
//    pointer_catre_stiva_mea->varf = 0;
//
//    free(pointer_catre_stiva_mea->tab);
//}
//
//
//void afisare(struct stiva stiva_mea) 
//{
//    for (int index_current = 0; index_current < stiva_mea.nrmax; index_current++)
//    {
//        printf("Elementul de la indexul: %d este %f \n", index_current, stiva_mea.tab[index_current]);
//    }
//}
//
//// 0 daca stiva nu este plina (false)
//// 1 daca stiva este plina (adevarat)
//int stiva_plina(struct stiva stiva_mea)
//{
//    return(stiva_mea.nrmax == stiva_mea.varf);
//}
//
//
//// 0 daca stiva nu este goala (false)
//// 1 daca stiva este goala (adevarat)
//int stiva_goala(struct stiva stiva_mea)
//{
//    return(stiva_mea.varf == 0);
//}
//
//void adauga_element(double element, struct stiva *pointer_catre_stiva_mea)
//{
//    pointer_catre_stiva_mea->tab[pointer_catre_stiva_mea->varf] = element;
//    pointer_catre_stiva_mea->varf++;
//}
//
//void extrage_element(double *pointer_unde_va_fi_salvat_elementul, struct stiva *pointer_catre_stiva_mea) 
//{
//    *pointer_unde_va_fi_salvat_elementul = pointer_catre_stiva_mea->tab[pointer_catre_stiva_mea->varf];
//    pointer_catre_stiva_mea->tab[pointer_catre_stiva_mea->varf] = 0;
//    pointer_catre_stiva_mea->varf--;
//}
//
//void copiere(struct stiva stiva_mea_de_la, struct stiva *pointer_catre_stiva_mea_catre) 
//{
//    // aici nu imi dau seama daca se vrea copiere sau mutare asa ca o sa zic copiere cat mai e loc in ea
//
//    for (int index_current = 0; index_current <= pointer_catre_stiva_mea_catre->varf; index_current++)
//    {
//        pointer_catre_stiva_mea_catre->tab[pointer_catre_stiva_mea_catre->varf] = stiva_mea_de_la.tab[index_current];
//    }
//
//
//}
//
//
//struct stiva a;
//struct stiva b;
//
//// De aici incepe programul din main
//void main() 
//{
// 
//    // intializare stive cu 5 elemente
//    intializare(&a, 5);
//    intializare(&b, 5);
//
//    // introdu 5 valori de la tastura in stiva a
//    for (int i = 0; i < 5; i++)
//    {
//        double numar_tastatura = 0.0;
//        printf("\n Introdu un numar double:");
//        scanf("%lf", &numar_tastatura);
//        printf("Caracterul de la tastura este: %lf \n", numar_tastatura);
//        adauga_element(numar_tastatura, &a);
//    }
//
//    // afisare stiva a
//    afisare(a);
//
//
//    // copiere stiva a in b si afisam a si b
//    copiere(a, &b);
//    // afisare stiva a si b
//    afisare(a);
//    afisare(b);
//
//    // Extragem 2 elemtne din a
//    double element_extras = 0;
//    extrage_element(&element_extras, &a);
//    extrage_element(&element_extras, &a);
//
//    // afisam continutul stivei a
//    afisare(a);
//
//    for (int i = a.nrmax; i = 0; i--)
//    {
//        extrage_element(&element_extras, &a);
//        printf("Inca un element a fost extras din a");
//        afisare(a);
//    }
//
//    getchar();
//
//
//
//
//
//
//
//    //// iti afiseaza in consola textul(poate afisa si numere %d)
//    //printf("Hello World!");
//
//    //// cisteste de la tastura un numar si afiseaza
//    //// declaram un numar intreg si il intializam cu 0
//    //int numar_tastatura = 0;
//    //printf("\n Introdu un numar intreg: \n");
//    //scanf("%d", &numar_tastatura);
//    //printf("Caracterul de la tastura este: %d \n", numar_tastatura);
//
//    //// Sa asteptam in consola deschisa
//    //getchar();
//}
