#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    int taille=0;
    printf("Hello world!\n");
    printf("Entrer le nombre d'etudiants\n");
    scanf("%d",&taille);
    int tab[taille];
    printf("donner sur une de 10 la qualite de la nourriture offerte dans le cafetariat\n");
    for(int i=0;i<taille;i++)
    {
        printf(" entrer la note de l'etudiants numero %d \n",i);
        scanf("%d",&tab[i]);
    }
    for(int i=1;i<=10;i++)
    {
        int k=0;
        int val=i;
        for(int j=0;j<taille;j++)
        {
            if(val==tab[j])
            {
                k++;
            }
        }
        printf(" la note \"%d\" a ete note %d fois \n",i,k);
    }

    return 0;
}
