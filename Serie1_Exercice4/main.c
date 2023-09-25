#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    /* declaration des variables */
    float a,b,c,x1,x2,dis;
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


    return 0;
}
