/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Aryan Khurana
Student ID#: 145282216
Email      : akhurana22@myseneca.ca
Section    : NJJ

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // Declaring variables
    int numberOfApples, numberOfOranges, numberOfPears, numberOfTomatoes, numberOfCabbages, continueShopping = 1;
    int applesPicked = 0, orangesPicked = 0, pearsPicked = 0, tomatoesPicked = 0, cabbagesPicked = 0;

    while (continueShopping == 1)
    {
        // Displaying the shopping list
        printf("Grocery Shopping\n");
        printf("================\n");

        // Apples
        printf("How many APPLES do you need? : ");
        scanf("%d", &numberOfApples);

        // This loop runs if the user enters a value less than 0 for the number of Apples
        while (numberOfApples < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many APPLES do you need? : ");
            scanf("%d", &numberOfApples);
        }
        printf("\n");

        // Oranges
        printf("How many ORANGES do you need? : ");
        scanf("%d", &numberOfOranges);

        // This loop runs if the user enters a value less than 0 for the number of Oranges
        while (numberOfOranges < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many ORANGES do you need? : ");
            scanf("%d", &numberOfOranges);
        }
        printf("\n");

        // Pears
        printf("How many PEARS do you need? : ");
        scanf("%d", &numberOfPears);

        // This loop runs if the user enters a value less than 0 for the number of Pears
        while (numberOfPears < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many PEARS do you need? : ");
            scanf("%d", &numberOfPears);
        }
        printf("\n");

        // Tomatoes
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &numberOfTomatoes);

        // This loop runs if the user enters a value less than 0 for the number of Tomatoes
        while (numberOfTomatoes < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &numberOfTomatoes);
        }
        printf("\n");

        // Cabbages
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &numberOfCabbages);

        // This loop runs if the user enters a value less than 0 for the number of Cabbages
        while (numberOfCabbages < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &numberOfCabbages);
        }
        printf("\n");

        // Picking the products
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");
        printf("\n");

        // Initializing some more important variables
        int applesLeft = numberOfApples, orangesLeft = numberOfOranges, pearsLeft = numberOfPears, tomatoesLeft = numberOfTomatoes, cabbagesLeft = numberOfCabbages;

        // Only show those which are more than 0
        // Apples
        while (numberOfApples > 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &applesPicked);

            if (applesPicked > applesLeft)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", applesLeft);
            }

            else if (applesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((applesPicked < applesLeft) && (applesPicked > 0))
            {
                printf("Looks like we still need some APPLES...\n");
                applesLeft = applesLeft - applesPicked;
            }

            else if (applesPicked == applesLeft)
            {
                printf("Great, that's the apples done!\n\n");
                break;
            }
        }

        // Oranges
        while (numberOfOranges > 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &orangesPicked);

            if (orangesPicked > orangesLeft)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", orangesLeft);
            }

            else if (orangesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((orangesPicked < orangesLeft) && (orangesPicked > 0))
            {
                printf("Looks like we still need some ORANGES...\n");
                orangesLeft = orangesLeft - orangesPicked;
            }

            else if (orangesPicked == orangesLeft)
            {
                printf("Great, that's the oranges done!\n\n");
                break;
            }
        }

        // Pears
        while (numberOfPears > 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pearsPicked);

            if (pearsPicked > pearsLeft)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pearsLeft);
            }

            else if (pearsPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((pearsPicked < pearsLeft) && (pearsPicked > 0))
            {
                printf("Looks like we still need some PEARS...\n");
                pearsLeft = pearsLeft - pearsPicked;
            }

            else if (pearsPicked == pearsLeft)
            {
                printf("Great, that's the pears done!\n\n");
                break;
            }
        }

        // Tomatoes
        while (numberOfTomatoes > 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &tomatoesPicked);

            if (tomatoesPicked > tomatoesLeft)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoesLeft);
            }

            else if (tomatoesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((tomatoesPicked < tomatoesLeft) && (tomatoesPicked > 0))
            {
                printf("Looks like we still need some TOMATOES...\n");
                tomatoesLeft = tomatoesLeft - tomatoesPicked;
            }

            else if (tomatoesPicked == tomatoesLeft)
            {
                printf("Great, that's the tomatoes done!\n\n");
                break;
            }
        }

        // Cabbages
        while (numberOfCabbages > 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &cabbagesPicked);

            if (cabbagesPicked > cabbagesLeft)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbagesLeft);
            }

            else if (cabbagesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((cabbagesPicked < cabbagesLeft) && (cabbagesPicked > 0))
            {
                printf("Looks like we still need some CABBAGES...\n");
                cabbagesLeft = cabbagesLeft - cabbagesPicked;
            }

            else if (cabbagesPicked == cabbagesLeft)
            {
                printf("Great, that's the cabbages done!\n\n");
                break;
            }
        }

        printf("All the items are picked!\n\n");

        // Ask if the loop need to be run again
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &continueShopping);
        printf("\n");

    }

    // Ending message
    printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}