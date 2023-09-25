#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    /* declaration des variables */
    int i,max ;
    int nbre[4];
    printf("entrer une suite de quatre nombres");
    for(int i=0;i<=3;i++)
    {
        printf("\n");
        scanf("%d",&nbre[i]);
        if(i==0)
            max=nbre[0];
        else
            if(nbre[i]>max)
                max=nbre[i];
    }
    printf("le plus grand est %d ",max);


    return 0;
}
