#ifndef MATRICE_H_INCLUDED
#define MATRICE_H_INCLUDED



/*declaration des prototypes */

void affiche_mat(double (*mat)[4],int taille, char *s);
void initialisation_mat(double (*mat)[4],int taille);
void remplir_mat(double (*mat)[4], int taille);
void somme_mat(double (*mat1)[4], double (*mat2)[4], int taille);
void soustraction_mat(double (*mat1)[4],double (*mat2)[4], int taille);
void multi_mat(double (*mat1)[4], double (*mat2)[4], int taille);
void extraire_mat(double (*mat1)[4],double (*mat_copie)[4],int taille,int ligne,int colone);
double determinant_mat(double (*mat1)[4], int taille);
void transposee_mat(double (*mat)[4],double (*matR)[4], int taille);
double co_facteur(double (*mat1)[4], int taille ,int ligne, int colone);
void co_matrice(double (*mat1)[4], double (*matR)[4], int taille);
void inverse_mat(double (*mat1)[4], double (*matR)[4], int taille);
int rang_mat(double (*mat1)[4],int taille);
int nbre_ligne_zero(double (*mat1)[4], int taille);
void echelonne_mat(double (*mat1)[4],double (*matR)[4], int taille);
void copy_mat(double (*mat1)[4],double (*matR)[4],int taille);
double abso(double x);
#endif // MATRICE_H_INCLUDED
