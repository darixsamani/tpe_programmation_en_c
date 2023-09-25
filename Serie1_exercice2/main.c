#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf(" Nom: SAMANI SIEWE\n Prenom : Darix Matricile : 17Y553P\n\n\n");
    float a,b,c,d,e,f ,dets,detx,dety,x,y;
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



    return 0;
}
