#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{
    int alt , reponse , score = 0 , cpt = 0 ;

    srand(time(NULL));

    alt = ( rand() % 101 );

    printf("*** LE BUT DU JEU EST DE TROUVER LE NOMBRE QUI A ETE PRIS EN ALEATOIRE ***\n");

    do
    {
        do
        {
           printf("entrer un nombre de votre choix entre 1 et 100 \n");
           scanf("%d",&reponse);
        } while ( reponse < 1 || reponse > 100);
        
        if ( alt <= 10 )
        {
            printf("le nombre est inferieure a 10 \n");
        }
        else if ( alt <= 20 )
        {
            printf("le nombre est inferieure a 20 \n");
        }
        else if ( alt <= 30 )
        {
            printf("le nombre est inferieure a 30 \n");
        }
        else if ( alt <= 40 )
        {
            printf("le nombre est inferieure a 40 \n");
        }
        else if ( alt <= 50 )
        {
            printf("le nombre est inferieure a 50 \n");
        }
        else if ( alt <= 60 )
        {
            printf("le nombre est inferieure a 60 \n");
        }
        else if ( alt <= 70 )
        {
            printf("le nombre est inferieure a 70 \n");
        }
        else if ( alt <= 80 )
        {
            printf("le nombre est inferieure a 80 \n");
        }
        else if ( alt <= 90 )
        {
            printf("le nombre est inferieure a 90 \n");
        }
        else
        {
            printf("le nombre est inferieure a 100 \n");
        }

        if ( alt == reponse )
        {
            score ++ ;
        }
        else
        { 
            printf("recommencer un autre fois , vous n'avez pas trouver le bon nombre \n");
        }
        cpt ++ ;

    } while ( score != 1 ) ;

    printf("BRAVO a vous , vous avez gagner .\n Vous avez trouve le nombre %d en %d coup , alors qu'il avait une chance sur 100 pour le trouver .\n",alt,cpt);
}


