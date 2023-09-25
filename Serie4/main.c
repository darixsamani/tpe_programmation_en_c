#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"


int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    int recommencer=1;
    do
    {
        int choix=0;
        int taille=4;
        printf("1. somme de deux matrices \n");
        printf("2. soustraction de deux matrices \n");
        printf("3. produit de deux matrices \n");
        printf("4. determinant d'une matrice \n");
        printf("5. transposee d'une matrice \n");
        printf("6. comatrice d'une matrice \n");
        printf("7. l'inverse d'une matrice \n");
        printf("8. le rang d'une matrice \n");
        printf("9.  la matric est elle diagonalisable ? et forme echelonnee reduite \n");
        printf("\nEntrer un nombre comme indique pour faire votre choix : ");
        scanf("%d",&choix);

        double mat1[taille][taille];
            initialisation_mat(mat1,taille);
            remplir_mat(mat1,taille);
            affiche_mat(mat1,taille,"les elements de la matrice MAT1");
        double mat2[taille][taille];
            initialisation_mat(mat2,taille);
            remplir_mat(mat2,taille);
            affiche_mat(mat2,taille,"les elements de la matrice MAT2");
        double mat3[taille][taille]; // cette matrice nous sert de resultat
            initialisation_mat(mat3,taille);

        switch(choix)
        {
            case 1:
                /* SOMME DE DEUX MATRICES */
                    somme_mat(mat1,mat2,taille);
                    break;
            case 2:
                /*SOUSTRACTION DE DEUX MATRICES */
                    soustraction_mat(mat1,mat2,taille);
                    break;
            case 3:
                /* PRODUIT DE DEUX MATRICES */
                    multi_mat(mat1,mat2,taille);
                    break;
            case 4:
                /* DETERMINANT D"UNE MATRICES */
                    printf("le determinant de mat1 est : %f \n",determinant_mat(mat1,taille));
                    printf("le determinant de mat2 est : %f \n",determinant_mat(mat2,taille));
                    break;
            case 5:
                /* TRANSPOSEE D'UNE MATRICE */
                    transposee_mat(mat1,mat3,taille);
                    affiche_mat(mat3, taille, "la transposee de mat1 est :");
                    transposee_mat(mat2,mat3,taille);
                    affiche_mat(mat3, taille, "la transposee de mat2 est :");
                    break;
            case 6:
                /* COMATRICE D'UNE MATRICE */
                    co_matrice(mat1,mat3,taille);
                    affiche_mat(mat3,taille, "la comatrice de mat1 est :");
                    co_matrice(mat2,mat3,taille);
                    affiche_mat(mat3, taille, "la comatrice de mat2 est :");
                    break;
            case 7:
                /*INVERSE D'UNE MATRICE */
                    inverse_mat(mat1,mat3,taille);
                    if(determinant_mat(mat1,taille)!=0);
                    {
                        affiche_mat(mat3, taille, "l'inverse de mat1 est :");
                    }

                    inverse_mat(mat2,mat3,taille);
                    if(determinant_mat(mat3,taille)!=0);
                    {
                        affiche_mat(mat3, taille, "l'inverse de mat2 est :");
                    }

                    break;
            case 8:
                /*RANG D'UNE MATRICE ET ECHELONNEE REDUITE
                */
                printf("le Rang de la matrice MAT1 est : %d\n",rang_mat(mat1,taille));
                printf("le Rang de la matrice MAT2 est : %d\n",rang_mat(mat2,taille));
                break;
            case 9:
                /* DIAGONALISABLE ET ECHELONNEE REDUITE */
                echelonne_mat(mat1,mat3,taille);
                affiche_mat(mat3,taille, "la forme echelonee reduite de MAT1 est : ");
                echelonne_mat(mat2,mat3,taille);
                affiche_mat(mat3, taille, "la forme echelonee reduite de MAT2 est : ");
                break;

            default:
                printf("vous avez saisir un numero invalide \n");
                break;
        }
        printf(" \nVoullez vous recommencer 1.oui et 0.non : ");
        scanf("%d",&recommencer);

    }while(recommencer==1);

    return 0;
}
