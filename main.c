#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TO DO LIST
// Compteur de coups - DONE
// Redemander pour une autre partie - DONE
// Plusieurs niveau de difficulté - DONE

// Désolé, code pas très propre...

int main()
{
    srand(time(NULL)); // doit être exécuté qu'1 fois

    int retry = 1;
    while(retry == 1)
    {
        int difficulte = 0;
        int MAX = 100;

        while(difficulte == 0)
        {
            printf("1. Niveau de difficulte sur 100 chiffres \n");
            printf("2. Niveau de difficulte sur 1000 chiffres \n");
            printf("3. Niveau de difficulte sur 10000 chiffres \n");
            printf("Votre choix ? ");
            scanf("%d", &difficulte);

            if(difficulte == 1)
            {
                MAX = 100;
            }
            else if(difficulte == 2)
            {
                MAX = 1000;
            }
            else if(difficulte == 3)
            {
                MAX = 10000;
            }
            else
            {
                printf(" \n Veuillez réessayer en ecrivant 1,2 ou 3 \n \n ");
                difficulte = 0;
            }
        }
        int coups = 0;
        int nbrFound = 0;

        int mysteryNbr = (rand() % (MAX - 0 + 1)) + 0;
        // printf("nombre mystere : %d \n \n", mysteryNbr); //debug

        while(nbrFound == 0)
        {
            coups++;
            int playerNbr = 0;
            printf("\n Quel est votre nombre ? \n");
            scanf("%d", &playerNbr);

            if (playerNbr > mysteryNbr)
            {
                printf("\n C'est moins");
            }
            else if (playerNbr < mysteryNbr)
            {
                printf("\n C'est plus");
            }
            else if(playerNbr == mysteryNbr)
            {
                printf("\n Bravo, vous avez trouvez le nombre mystere en %d coups !! \n", coups);
                nbrFound = 1;
            }
        }

        printf("Voulez vous refaire une partie ? (0/1) \n");

        int ifresponse = 0;
        int playerReponse = 1;

        while(ifresponse == 0)
        {
            scanf("%d", &playerReponse);

            if(playerReponse == 1)
            {
                retry = 1;
                ifresponse = 1;
                printf("La partie recommence !! \n");
            }

            else if(playerReponse == 0)
            {
                retry = 0;
                ifresponse = 1;
                printf("La partie s'arrête ! \n");
            }

            else
            {
                printf("Veuillez réessayer \n");
                ifresponse = 0;
            }
        }
    }

    return 0;
}
