#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp_chaine(const char* chaine1, const char* chaine2)
{
    int a;
    if(strlen(chaine1)!=strlen(chaine2))
    {
        return -1;
    }
    else
    {
        for(int i=0;i<strlen(chaine1);i++)
        {
            if(chaine1[i]!=chaine2[i])
            {
                a=-1;
            }
            else
            {
                a=0;
            }
        }
        return a;
    }
}

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    /*declaration des variables */
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";
    if (cmp_chaine(chaine1, chaine2) == 0) // Si chaînes identiques
    {
    printf("Les chaines sont identiques\n");
    }
    else
    {
    printf("Les chaines sont differentes\n");
    }
    int heure;
    char jour[10],lundi[]="lundi",dimanche[]="dimanche";
    printf("Hello world!\n");
    printf("-----------------------------------------------------\n");
    printf("------ Entrer une heure comprise entre 0 et 24 ------\n");
    printf("-----------------------------------------------------\n");
    scanf("%d",&heure);
    printf("--------------------------------------------------------\n");
    printf("------ Entrer un jour de votre choix en miniscule ------\n");
    printf("--------------------------------------------------------\n");
    scanf("%s",&jour);
    /*if(strcmp(jour,dimanche)==0)
    {
        printf("succes dimanche\n");
    }
    if(strcmp(jour,lundi)==0)
    {
        printf("succes lundi\n");
    }
    */
    while(heure<0 || heure>24)
    {
        printf("------ heure que vous avez entre est incorrect, veillez entrer a nouveau une heure ------\n");
        scanf("%d",&heure);
    }
    if( heure<7 || (heure>13 && heure<16) || heure>19) /*si heure n'est pas exact */
        {
            printf("----------------------------------------------------\n");
            printf("------ la boulangerie est ferme a cette heure ------\n");
            printf("----------------------------------------------------\n");
        }
    else /* on se trouve dans les heures ou la boulangerie est ouverte*/
        if( strcmp(jour,lundi)==0)
            {
                printf("---------------------------------------------------------------------\n");
                printf("  ------ la boulangerie n'est pas ouverte le %s ------\n",jour);
                printf("---------------------------------------------------------------------\n");
            }
        else if(strcmp(jour,dimanche)==0)
        {
            if(heure>=7 && heure<=9)
            {
                printf("---------------------------------------------------------------------\n");
                printf("  ------ la boulangerie est ouverte le %s a %dh ------\n",jour,heure);
                printf("---------------------------------------------------------------------\n");
            }
            else
            {
                printf("---------------------------------------------------------------------\n");
                printf("  ------ la boulangerie n'est pas ouverte le %s a %dh ------\n",jour,heure);
                printf("---------------------------------------------------------------------\n");
            }

        }
        else
            {
                printf("----------------------------------------------------\n");
                printf("------ la boulangerie est ouverte a cette heure ------\n");
                printf("----------------------------------------------------\n");
            }

    return 0;
}
