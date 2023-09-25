#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    /* declaration des variables */
    float k,e=0.0,eps=1.0/1000000000000000000000000000000000000000000000000000000.0;
    int i=0;
    do
    {
        k=1.0/fact(i);
        e+=k;
        i++;
    }while(k>eps);
    printf(" la valeur de e est %f \n\n",e);
    return 0;
}
