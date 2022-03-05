/*
*****************************************************************************
                          Workshop - #7 (P2)
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

#define MAXIMUM_PATH_LENGTH 70
#define MINIMUM_PATH_LENGTH 10
#define MAXIMUM_LIVES 10
#define MINIMUM_LIVES 1
#define MULTIPLE 5

#include <stdio.h>

// Creating a user defined datatype
struct playerInfo {
    int lives;
    char playerCharacter;
    int treasureCount;
    int positionHistory[MAXIMUM_PATH_LENGTH];
};

// Creating another user defined datatype
struct gameInfo {
    int moves;
    int pathLength;
    int bombLocations[MAXIMUM_PATH_LENGTH];
    int treasureLocations[MAXIMUM_PATH_LENGTH];
};

int main(void)
{
    // Declaring variables
    int i, j, k; // Used in for loops
    int movesRemaining, livesRemaining, movePosition = MAXIMUM_PATH_LENGTH + 1;
    
    // Allocating memory for a player and a game
    struct playerInfo player;
    struct gameInfo game;

    printf("================================\n");
    printf("         Treasure Hunt!         \n");
    printf("================================\n");
    printf("\n");

    // Configuring the player
    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.playerCharacter);

    do {
        printf("Set the number of lives: ");
        scanf("%d", &player.lives);

        if (player.lives < MINIMUM_LIVES || player.lives > MAXIMUM_LIVES)
        {
            printf("     Must be between 1 and 10!\n");
        }
    }
    while (player.lives < MINIMUM_LIVES || player.lives > MAXIMUM_LIVES);
    
    printf("Player configuration set-up is complete\n");
    printf("\n");

    // Configuring the game
    printf("GAME Configuration\n");
    printf("------------------\n");
    
    // Path Length
    do {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d", &game.pathLength);

        if ((game.pathLength < MINIMUM_PATH_LENGTH || game.pathLength > MAXIMUM_PATH_LENGTH) || (game.pathLength % MULTIPLE != 0))
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
    }
    while ((game.pathLength < MINIMUM_PATH_LENGTH || game.pathLength > MAXIMUM_PATH_LENGTH) || (game.pathLength % MULTIPLE != 0));

    // Number of moves
    do {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &game.moves);

        if (game.moves < player.lives || game.moves > (int) (0.75 * game.pathLength))
        {
            printf("     Value must be between %d and %d\n", player.lives, (int) (0.75 * game.pathLength));
        }
    }
    while (game.moves < player.lives || game.moves > (int) (0.75 * game.pathLength));
    printf("\n");

    // Bomb Placement in Arrays
    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");

    // Prompting for bomb placement
    for (i = 0; i < game.pathLength; i+=5)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        scanf("%d %d %d %d %d", &game.bombLocations[i], &game.bombLocations[i + 1], &game.bombLocations[i + 2], &game.bombLocations[i + 3], &game.bombLocations[i + 4]);
    }
    
    printf("BOMB placement set\n");
    printf("\n");

    // Treasure Placement in Arrays
    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");

    // Prompting for treasure placement
    for (i = 0; i < game.pathLength; i+=5)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        scanf("%d %d %d %d %d", &game.treasureLocations[i], &game.treasureLocations[i + 1], &game.treasureLocations[i + 2], &game.treasureLocations[i + 3], &game.treasureLocations[i + 4]);
    }

    printf("TREASURE placement set\n");
    printf("\n");

    printf("GAME configuration set-up is complete...\n");
    printf("\n");

    // Displaying the treasure hunt configuration settings
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");

    // Player Details
    printf("Player: \n");
    printf("   Symbol     : %c\n", player.playerCharacter);
    printf("   Lives      : %d\n", player.lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n");

    // Game Details
    printf("Game: \n");
    printf("   Path Length: %d\n", game.pathLength);

    // Bombs
    printf("   Bombs      : ");
    // Displaying bombs array
    for (j = 0; j < game.pathLength; j++)
    {
        printf("%d", game.bombLocations[j]);
    }
    printf("\n");

    // Treasures
    printf("   Treasure   : ");
    // Displaying treasures array
    for (k = 0; k < game.pathLength; k++)
    {
        printf("%d", game.treasureLocations[k]);
    }
    printf("\n\n");

    // Starting the game
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");
    printf("\n");

    // Assigning values
    movesRemaining = game.moves;
    livesRemaining = player.lives;
    player.treasureCount = 0;
    for (j = 0; j < game.pathLength; j++)
    {
        player.positionHistory[j] = 0;
    }

    // Printing the table
    do {
        // First Line
        for (i = 0; i < game.pathLength; i++)
        {
            if (i == movePosition - 1)
            {
                printf("V");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

        // Second Line
        for (i = 0; i < game.pathLength; i++)
        {
            if (player.positionHistory[i] == 1)
            {
                if (game.bombLocations[i] == 1 && game.treasureLocations[i] == 1)
                {
                    printf("&");
                }
                else if (game.bombLocations[i] == 1)
                {
                    printf("!");
                }
                else if (game.treasureLocations[i] == 1)
                {
                    printf("$");
                }
                else
                {
                    printf(".");
                }
            }
            else if (i == movePosition - 1) 
            {
                if (game.bombLocations[movePosition] == 1 && game.treasureLocations[movePosition] == 1)
                {
                    printf("&");
                }
                else if (game.bombLocations[movePosition - 1] == 1)
                {
                    printf("!");
                }
                else if (game.treasureLocations[movePosition - 1] == 1)
                {
                    printf("$");
                }
                else
                {
                    printf(".");
                }
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");

        // Third Line
        for (i = 1; i <= game.pathLength; i++)
        {
            if ( i % 10 == 0)
            {
                printf("%d", (int) i / 10);
            }
            else
            {
                printf("|");
            }
        }
        printf("\n");

        // Fourth Line
        for (i = 0; i < game.pathLength; i += 10)
        {
            printf("1234567890");
        }
        printf("\n");

        // Displaying Player Statistics
        printf("+---------------------------------------------------+\n");
        printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", livesRemaining, player.treasureCount, movesRemaining);
        printf("+---------------------------------------------------+\n");

        // Quit loop if the remaining lives are zero
        if (livesRemaining == 0)
        {
            break;
        }

        // Quit loop if the remaining moves are zero
        if (movesRemaining == 0)
        {
            break;
        }

        // Determining the next move
        do {
            printf("Next Move [1-20]: ");
            scanf("%d", &movePosition);

            if (movePosition < 1 || movePosition > game.pathLength)
            {
                printf("  Out of Range!!!\n");
            }
            
        } while(movePosition < 1 || movePosition > game.pathLength);
        printf("\n");

        if (player.positionHistory[movePosition - 1] == 1)
        {
            printf("===============> Dope! You've been here before!\n\n");
        }
        
        else if (game.bombLocations[movePosition - 1] == 1 && game.treasureLocations[movePosition - 1] == 1)
        {
            printf("===============> [!] !!! BOOOOOM !!! [!]\n");
            printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");
            livesRemaining--;
            player.treasureCount++;
        }

        else if (game.bombLocations[movePosition - 1] == 1)
        {
            printf("===============> [!] !!! BOOOOOM !!! [!]\n\n");
            livesRemaining--;
        }

        else if (game.treasureLocations[movePosition - 1] == 1)
        {
            printf("===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
            player.treasureCount++;
        }

        // else if (game.treasureLocations[movePosition - 1] == 0 && game.bombLocations[movePosition - 1] == 0)
        else
        {
            printf("===============> [.] ...Nothing found here... [.]\n\n");
        }

        // Storing the position in history array
        player.positionHistory[movePosition - 1] = 1;

        // Decrementing the number of moves left
        movesRemaining--;

        if (livesRemaining == 0)
        {
            printf("No more LIVES remaining!\n\n");
        }
        if (movesRemaining == 0)
        {
            printf("No more MOVES remaining!\n\n");
        }

    } while (movesRemaining >= 0 && livesRemaining >= 0);

    // Printing the final table

    printf("\n");

    // Ending Lines
    printf("##################\n");
    printf("#   Game over!   #\n");
    printf("##################\n");
    printf("\n");

    printf("You should play again and try to beat your score!\n");
    printf("\n");

    return 0;
}
