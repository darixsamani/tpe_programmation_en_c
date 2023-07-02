#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* DECLARATION DES FONCTIONS */
int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

void serie1_exercice1(void)
{
    /*declaration des variables */
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";
    /*if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
    printf("Les chaines sont identiques\n");
    }
    else
    {
    printf("Les chaines sont differentes\n");
    }*/
    int heure;
    char jour[10],lundi[]="lundi",dimanche[]="dimanche";
    /*printf("Hello world!\n");*
    /*printf("Hello world!\n");*/
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

}

void serie1_exercice2(void)
{
    float a,b,c,d,e,f ,dets,detx,dety,x,y;
    printf("Hello world!\n");
    printf("resolution d'un systeme de deux equations a deux inconnus \n");
    printf("------- a*x + b*y = c -------\n");
    printf("------- d*x + e*y = f -------\n");
    printf("Entre les valeurs dans cette ordre a, b, c, d, e et f\n");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    dets= a*e - d*b;
    detx= c*e - b*f;
    dety= a*f - d*c;
    if(dets!=0)
        if(detx==0 || dety==0)
            printf("il y a pas de solution");
        else
        {
            x=detx/dets;
            y=dety/dets;
            printf("------- %f*x + %f*y = %f -------\n",a,b,c);
            printf("------- %f*x + %f*y = %f -------\n",d,e,f);
            printf("-------------------------------------------------------------------------\n");
            printf("------- ce systeme ci-dessous a pour solution le couple (%f,%f)\n -------",x,y);
            printf("-------------------------------------------------------------------------\n");

        }
    else
    {
        printf("il y a une infinite de solution \n");
    }
}

void serie1_exercice3(void)
{
    /* declaration des variables */
    int i,max ;
    int nbre[4];
    printf("Hello world!\n");
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
}

void serie1_exercice4(void)
{
    /* declaration des variables */
    float a,b,c,x1,x2,dis;
    printf("Hello world!\n");
    printf("resolution d'une equation du seconde degre de la forme\n ------ a*x^2 + b*x + c ------\n");
    printf("Entrer les valeurs dans l'ordre a, b et c \n");
    scanf("%f %f %f",&a,&b,&c);
    dis= b*b - 4*a*c ;
    if(dis<0)
        printf("cette equation n'a pas de solution dans R\n");
    else
        if(dis==0)
        {
            x1=b/(2*a);
            printf("cette equation a une solution double x = %f",x1);
        }
        else
        {
            x1=( b+ pow(dis,0.5))/(2*a);
            x2=( b - pow(dis,0.5))/(2*a);
            printf("cette equation a deux soltions x1 = %f et x2 = %f \n",x1,x2);
        }
}

void serie2_exercice1(void)
{
    float solde_courant,montant_checque,montant_versement;
    printf("Hello world!\n");
    printf("entrer le solde courant\n");
    scanf("%f",&solde_courant);
    printf("entrer le montant du checque\n");
    scanf("%f",&montant_checque);
    do
    {
        printf("entrer le montant du versement\n");
        scanf("%f",&montant_versement);
    }while(montant_versement>montant_checque);


    printf("solde courant initial        |         montant du checque      |  montant du versement\n");
    printf(" %.2f XAF                             %.2f XAF                 %.2f XAF             \n",solde_courant,montant_checque,montant_versement) ;
    printf("------------------------------------------------------------------------------------------\n");
    printf("solde courant apres le versement        |         montant du checque       \n");
    printf("      %.2f XAF                                    %.2f XAF                                 \n ",solde_courant+montant_versement,montant_checque-montant_versement) ;


}

void serie2_exercice2(void)
{
    /* declaration des variables */
    float nbre,r=1.00,e=1.0/100000.0;
    printf("Hello world!\n");
    printf("Entrer un nombre reel \n");
    scanf("%f",&nbre);
    do
    {
        r=(r+(nbre/r))/2;
    }while((r*r - nbre)>e);
    printf(" la racine carree de %f par la methode de newton est egale a %.9f",nbre,r);
    return 0;
}

void serie2_exercice3(void)
{
    /* declaration des variables */
    float k,e=0.0f,eps=1.0/1000000000000000000000000000000000000000000000000000000.0f;
    int i=0;
    printf("Hello world!\n");
    do
    {
        k=1.0/fact(i);
        e+=k;
        i++;
    }while(k>eps);
    printf(" la valeur de e est %.9f ",e);
}


int main()
{
    int choix1,choix2,choix3;
    printf("------------------------------------------------------------------------\n");
    printf("------- Entrer un nombre correspondant pour le choix de la Serie -------\n");
    printf("------------------------------------------------------------------------\n\n");
    printf(" 1. Exercices serie 1 \n");
    printf(" 2. Exercices serie 2 \n_ _ _ _ _ _ _ _ _ _ ");
    scanf("%d",&choix1);
    switch(choix1)
    {
        case 1:
            {
                printf("--------------------------------------------------------------------------\n");
                printf("------- Entrer un nombre correspondant pour le choix de l'Exercice -------\n");
                printf("--------------------------------------------------------------------------\n\n");
                printf(" 1. Exercices 1 serie 1 \n");
                printf(" 2. Exercices 2 serie 1 \n");
                printf(" 3. Exercices 3 serie 1 \n");
                printf(" 4. Exercices 4 serie 1 \n_ _ _ _ _ _ _ _ _ _ ");
                scanf("%d",&choix2);
                switch(choix2)
                {
                    case 1:
                        serie1_exercice1();
                        break;
                    case 2:
                        serie1_exercice2();
                         break;
                    case 3:
                        serie1_exercice3();
                         break;
                    case 4:
                        serie1_exercice4();
                         break;
                    default:
                        printf("--------------------------------------------------------------\n");
                        printf(" ------------- Vous avez entre un mauvais numero -------------\n");
                        printf("--------------------------------------------------------------\n");
                         break;
                }
            }
            break;
        case 2:
            {
                printf("--------------------------------------------------------------------------\n");
                printf("------- Entrer un nombre correspondant pour le choix de l'Exercice -------\n");
                printf("--------------------------------------------------------------------------\n\n");
                printf(" 1. Exercices 1 serie 2 \n");
                printf(" 2. Exercices 2 serie 2 \n");
                printf(" 3. Exercices 3 serie 2 \n_ _ _ _ _ _ _ _ _ _ ");
                scanf("%d",&choix3);
                switch(choix3)
                {
                    case 1:
                        serie2_exercice1();
                        break;
                    case 2:
                        serie2_exercice2();
                        break;
                    case 3:
                        serie2_exercice3();
                        break;
                    default:
                        printf("--------------------------------------------------------------\n");
                        printf(" ------------- Vous avez entre un mauvais numero -------------\n");
                        printf("--------------------------------------------------------------\n");
                        break;
                }
            }
            break;
        case 3:
            //serie4();

        default:
            printf("--------------------------------------------------------------\n");
            printf(" ------------- Vous avez entre un mauvais numero -------------\n");
            printf("--------------------------------------------------------------\n");
            break;
    }
    return 0;
}
