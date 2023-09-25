#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    float solde_courant,montant_checque,montant_versement;
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
    printf(" %.2f XAF                                    %.2f XAF                                 \n ",solde_courant+montant_versement,montant_checque-montant_versement) ;

    return 0;
}
