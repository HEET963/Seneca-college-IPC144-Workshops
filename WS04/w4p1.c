/*
*****************************************************************************
                          Workshop - #4 (P1)
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
    // Declaring Variables
    char operation_type;
    int number_of_iterations, continue_loop = 1;

    // Heading
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    printf("\n");

    // Running a loop which keeps on running until the user presses 'Q' to quit
    while (continue_loop == 1)
    {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &operation_type, &number_of_iterations);

        if (operation_type == 'D' || operation_type == 'W' || operation_type == 'F')
        {
            if (number_of_iterations >= 3 && number_of_iterations <= 20)
            {
                // Checking which loop is to be executed
                if (operation_type == 'D')
                {
                    // Executing a do-while loop
                    printf("DO-WHILE: ");
                    do
                    {
                        printf("D");
                        number_of_iterations--;
                    } while (number_of_iterations > 0);
                    printf("\n");
                }

                else if (operation_type == 'W')
                {
                    // Executing a while loop
                    printf("WHILE   : ");
                    while (number_of_iterations > 0)
                    {
                        printf("W");
                        number_of_iterations--;
                    }
                    printf("\n");
                }

                else if (operation_type == 'F')
                {
                    // Executing a do-while loop
                    printf("FOR     : ");
                    int i; // Declaring a variable for the for loop
                    for (i = number_of_iterations; i > 0; i--)
                    {
                        printf("F");
                    }
                    printf("\n");
                }
            }

            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!");
                printf("\n");
            }
        }

        else
        {
            if (operation_type == 'Q')
            {
                if (number_of_iterations == 0)
                {
                    // When the user wants to quit, the variable sets to 0 and the condition to run the while loop becomes false
                    continue_loop = 0;
                }
                else
                {
                    printf("ERROR: To quit, the number of iterations should be 0!\n");
                }
            }

            else
            {
                printf("ERROR: Invalid entered value(s)!\n");
            }
        }

        printf("\n");
    }

    // Ending
    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");
    printf("\n");

    return 0;
}