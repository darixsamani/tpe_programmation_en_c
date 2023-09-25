#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*declarations des types */
/*typedef struct string_darix
{
    int value;
    struct string_darix *suivant;
}string_darix, *s_darix;
typedef enum bool
{
    true,
    false
}Bool;

s_darix create_string(void)
{
    return NULL;
}

void print_string(s_darix s)
{
    if(empty_string(s))
    {
        printf("la liste des chaines de caractere est vide");
        return;
    }
    while(s!=NULL)
    {
        printf(" %s --",s->value);
        s=s->suivant;
    }

}
Bool emphy_string(s_darix s)
{
    return s==NULL;
}
s_darix push_string(const char* chaine,s_darix s)
{
    s_darix *element;
    element=malloc(sizeof(s_darix));
am    element->value=chaine;
    element->suivant=s;
    return element;
}*/
/*int taille;
    int j=0;
    printf("entrer la taille du tableau\n");
    scanf("%d",&taille);
    char tab[taille];
    char val[10];
    printf("Entrer une cahine de caractere\n");
    scanf("%s",&tab);
    printf("entrer val \n");
    scanf("%s",&val);
    for(int i=0;i<taille;i++)
    {
        printf("element %d est %c\n",i,tab[i]);
    }
    for(int i=0;i<taille;i++)
        {
           printf("element %d est %c\n",i,tab[i]);
        }

    printf("\n le nombre d'occurence de val = %s est %d",val,j);
*/

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    int taille=0,k=0;
    char val[10];
    printf("Entrer la taille de votre tableau \n");
    scanf("%d",&taille);
    char tab[10][taille];
    for(int i=0;i<taille;i++)
    {
        printf("Entrer la valeur numero %d\n",i);
        scanf("%s",&tab[i]);
    }
    printf("Entrer la valeur val \n");
    scanf("%s",&val);
    for(int i=0;i<taille;i++)
    {
        if(strcmp(val,tab[i])==0)
        {
            k++;
        }
    }
    printf("val %s apparait %d fois dans le tableau de chaine de caractere\n",val,k);
    return 0;
}
