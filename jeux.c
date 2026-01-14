#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{
    int result , reponse , i , score = 0 , gagner , alt ;

    srand(time(NULL));

    printf("{Bienvenue dans le jeux pierre feuille ciseau de Ziad Afdel}\n");
    printf("combien de manches voulez vous gagner ? \n");
    scanf("%d",&gagner);

    while ( score < gagner )
    {
        alt = ( rand() % 91 );

        do
        {
            printf("entrer : \n 1 = pierrre \n 2 = feuille \n 3 = ciseau \n");
            scanf("%d",&reponse);
        } while ( reponse != 1 && reponse != 2 && reponse != 3 );

        switch ( reponse )
            {
            case 1 :
                printf("pierre choisi \n");
                break;
            case 2 :
                printf("feuille choisi \n");
                break;
            case 3 :
                printf("ciseau choisi \n");
                break;
            default:
                break;
            }
    
    if ( alt <= 30 )
    {
        result = 1 ;
        printf("j'ai choisi pierre \n");
    }
    else if ( alt <= 60 )
    {
        result = 2 ;
        printf("j'ai choisi feuille \n");
    }
    else if ( alt <= 90 )
    {
        result = 3 ;
        printf("j'ai choisi ciseau \n");
    }
    
    if ( result == 1 && reponse == 2 )
    {
        printf("vous avez gagner \n");
        printf("+1\n");
     score ++;
    }
    else if ( result == 1 && reponse == 3 )
    {
        printf("vous avez echoue \n");
        printf("-1\n");
        score --;
    }
    else if ( result == 2 && reponse == 1 )
    {
        printf("vous avez echoue \n");
        printf("-1\n");
        score --;
    }
    else if ( result == 2 && reponse == 3 )
    {
        printf("vous avez gagner \n");
        printf("+1\n");
        score ++;
    }
    else if ( result == 3 && reponse == 1 )
    {
        printf("vous avez gagnez \n");
        printf("+1\n");
        score ++;
    }
    else if ( result == 3 && reponse == 2 )
    {
        printf("vous avez echoue \n");
        printf("-1\n");
        score --;
    }
    else
    {
    printf("egalite\n");
    }
}
    printf("votre score est :%d \n",score);
}

