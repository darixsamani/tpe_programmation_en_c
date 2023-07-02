#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    int taille=0;
    printf("Entrer la taille du tableau\n");
    scanf("%d",&taille);
    int tab[taille];
    printf("Entrer les elements du tableau\n");
    for(int i=0;i<taille;i++)
    {
        printf("Element %d \n",i);
        scanf("%d",&tab[i]);
    }
    printf(" ci-dessous osnt les elements impaires du tableau \n");
    for(int i=0;i<taille;i++)
    {
        if(tab[i]%2==1)
        {
            printf(" %d ",tab[i]);
        }
    }
    return 0;
}
