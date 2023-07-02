#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    int taille=0,s=0;
    printf("Hello world!\n");
    printf("Entrer la taille du tableau\n");
    scanf("%d",&taille);
    int tab[taille];
    printf("Entrer les elements du tableau\n");
    for(int i=0;i<taille;i++)
    {
        printf("Element %d \n",i);
        scanf("%d",&tab[i]);
    }
    printf("tableau avant les operations\n");
    for(int i=0;i<taille;i++)
    {
        printf(" % d ",tab[i]);
    }
    for(int i=0;i<taille;i++)
    {
        s=tab[i]+s;
        tab[i]=s;
    }
    printf("\ntableau apres les operations\n");
    for(int i=0;i<taille;i++)
    {
        printf(" %d ",tab[i]);
    }
    return 0;
}
