#include "matrice.h"


/* DECLARATION DES FONCTIONS */
void affiche_mat(double (*mat)[4],int taille,char *s)
{
    printf( "    %s  \n",s);
    for(int i=0;i<taille;i++)
    {
        for(int j=0;j<taille;j++)
        {
            printf("   %.3f   ",mat[i][j]);
        }
        printf("\n");
    }
}

void initialisation_mat(double (*mat)[4],int taille)
{

    for(int i=0;i<taille;i++)
    {
        for(int j=0;j<taille;j++)
        {
            mat[i][j]=0.0;
        }
    }
}

void remplir_mat(double (*mat)[4], int taille)
{
    printf("    REMPLISSEZ LES ELEMENTS DE LA MATRICE    \n");
    for(int i=0;i<taille;i++)
    {
        for(int j=0;j<taille;j++)
        {
            scanf("%lf",&mat[i][j]);
        }
    }
}
void somme_mat(double (*mat1)[4], double (*mat2)[4], int taille)
{
    double matR[taille][taille];
    initialisation_mat(matR,taille);
    for(int i=0;i<taille;i++)
    {
        for(int j=0;j<taille;j++)
        {
            matR[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    affiche_mat(matR,taille,"la somme des deux matrices est : ");
    return ;
}

void soustraction_mat(double (*mat1)[4],double (*mat2)[4], int taille)
{
    double matR[taille][taille];
    initialisation_mat(matR,taille);
    for(int i=0;i<taille;i++)
    {
        for(int j=0;j<taille;j++)
        {
            matR[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    affiche_mat(matR,taille,"la soustraction des deux matrices mat11 - mat2  est :");
}

void multi_mat(double (*mat1)[4], double (*mat2)[4], int taille)
{
    double matR[taille][taille];
    initialisation_mat(matR,taille);
    for(int i=0;i<taille;i++)
    {
        for(int j=0;j<taille;j++)
        {
            for(int k=0;k<taille;k++)
            {
                matR[i][j]+=mat1[i][k]*mat2[i][k];
            }
        }
    }
    affiche_mat(matR, taille, "la multiplication de deux matrices est :");
    return ;

}

/*
    cette fonction permet bien sur d'extraite une sous matrice d'ordre n-1 d'une
    matrice d'ordre n en supprimant la ligne i et la colone j
*/
void extraire_mat(double (*mat1)[4],double (*mat_copie)[4],int taille,int ligne,int colone)
{
    int l=0,c=0;
    for(int i=0; i<taille; i++)
    {
        if(i!=ligne)
        {
            for(int j=0; j<taille; j++)
            {
                if(j!=colone)
                {
                    mat_copie[l][c]=(double)mat1[i][j];
                    c++;
                }

            }
        c=0; // pour commencer a ecrire dans une nouvelles lignes
        l++;
        }

    }
}

double determinant_mat(double (*mat1)[4], int taille)
{
    int sgn=1;
    double det=0.0;
    if(taille==1)
    {
        return mat1[0][0];
    }
        for(int j=0;j<taille;j++)
        {
            double matR[taille][taille];
            initialisation_mat(matR,taille);
            extraire_mat(mat1,matR,taille,0,j);
            det+=sgn*(mat1[0][j])*(determinant_mat(matR,taille-1));
            sgn=sgn*(-1);
        }
    return det;
}

void transposee_mat(double (*mat)[4],double (*matR)[4], int taille)
{
    for(int i=0;i<taille;i++)
    {
        for(int j=i;j<taille;j++)
        {
            int pt=mat[i][j];
            matR[i][j]=mat[j][i];
            matR[j][i]=pt;
        }

    }
}

double co_facteur(double (*mat1)[4], int taille ,int ligne, int colone)
{
    double matRe[taille][taille];
    initialisation_mat(matRe,taille);
    extraire_mat(mat1,matRe,taille,ligne,colone);
    return determinant_mat(matRe,taille-1);
}

void co_matrice(double (*mat1)[4], double (*matR)[4], int taille)
{
    initialisation_mat(matR,taille);
    for(int i=0; i<taille; i++)
    {
        for(int j=0; j<taille; j++)
        {
            matR[i][j]=co_facteur(mat1,taille,i,j);
        }
    }
}

void inverse_mat(double (*mat1)[4], double (*matR)[4], int taille)
{
    initialisation_mat(matR,taille);
    if(determinant_mat(mat1,taille)==0)
    {
        printf(" \ncette matrice n'est pas inversible \n");
        return ;
    }
    double in_det=0.0f;
    in_det=1.0f/determinant_mat(mat1,taille);
    co_matrice(mat1,matR,taille);
    transposee_mat(matR,matR,taille);
    for(int i=0; i<taille; i++)
    {
        for(int j=0; j<taille; j++)
        {
            matR[i][j]=(in_det)*matR[i][j];
        }
    }
}

int rang_mat(double (*mat1)[4],int taille)
{
    if(determinant_mat(mat1,taille)!=0)
    {
        return taille;
    }
    double matR[taille][taille];
    initialisation_mat(matR,taille);
    echelonne_mat(mat1,matR,taille);
    return taille-nbre_ligne_zero(matR,taille);


}
int nbre_ligne_zero(double (*mat1)[4], int taille) //retouner le nombre de ligne nul d'une matrice
{
    int m=0;
    for( int i=0; i<taille; i++)
    {
        int k=0;
        for( int j=0; j<taille; j++)
        {
            if(mat1[i][j]==0)k++;

        }
        if(k==taille)  m++;
    }
    return m;
}

void echelonne_mat(double (*mat1)[4], double (*matR)[4],int taille)
{
    initialisation_mat(matR,taille);
    copy_mat(mat1,matR,taille);
    int r=-1;
    for( int j=0; j<taille; j++)
    {
        int k=0;
        double max=0.0f;
        max=abs(matR[r+1][j]);
        for(int w=r+1; w<taille; w++)
        {
            double val=0.0f;
            val=abso(matR[w][j]);
            if ( val>=max )
            {
                k=w;
                max=val;
            }
        }
        /*k=recherche_max(matR,r,taille);*/
        if(matR[k][j]!=0)
        {
            r++;
            for(int w=0;w<taille;w++)
            {
                matR[k][w]=(matR[k][w])/matR[k][j];
            }
            /*diverser_ligne(matR,k,akj,taille);*/
            if(k!=r)
            {
                for (int w=0; w<taille ; w++)
                {
                    double tmp=0.0f;
                    tmp=matR[r][j];
                    matR[r][j]=matR[k][j];
                    matR[k][j]=tmp;

                }
                /*echanger_ligne(matR,k, r,taille);*/
            }
            for( int i=0 ; i<taille ; i++)
            {
                if(i!=r)
                {

                    for(int w=0 ; w<taille ; w++)
                    {
                        matR[i][w] = matR[i][w]-(matR[i][j])*(matR[r][w]);
                    }
                    /*soustraire_ligne(matR,r,aij,int taille);*/
                }
            }
        }
    }
    int ver=0;
    for(int i=0; i<taille; i++)
    {
        for(int j=0; j<taille; j++)
        {
            if(matR[i][j]!=0 || matR[i][i]==0)
            {
                ver=1;
                break;
            }
        }
        if(ver==1)
        {
            break;
        }
    }
    if(ver==1)
    {
        printf("--------  cette MATRICE n'est pas DIAGONALISABLE  --------\n");
    }
    else
    {
        printf("-------- cette MATRICE est DIAGONALISABLE   --------\n");
    }
}

void copy_mat(double (*mat1)[4],double (*matR)[4],int taille)
{
    for(int i=0; i<taille; i++)
    {
        for(int j=0; j<taille ; j++)
        {
            matR[i][j]=mat1[i][j];
        }
    }
}
double abso(double x)
{
    if(x<=0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}
