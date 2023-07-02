#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    /* declaration des variables */
    float nbre,r=1.00f,e=1.00000/1000.0;
    printf("Entrer un nombre reel \n");
    scanf("%f",&nbre);
    do
    {
        r=(r+(nbre/r))/2.0;
    }while((r*r - nbre)>e);
    printf(" la racine carree de %f par la methode de newton est egale a %f",nbre,r);
    return 0;
}
