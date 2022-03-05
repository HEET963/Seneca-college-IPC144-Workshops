/*
*****************************************************************************
                          Workshop - #5 (P1)
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

#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    // Declaring Variables
    const int JAN = 1, DEC = 12; // Initializing two unmodifiable integer variables
    int continue_loop = 1; // Flag
    int year, month; // Other variables

    // Displaying the output
    printf("General Well-being Log\n");
    printf("======================\n");

    while (continue_loop == 1)
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        
        if (!(year >= MIN_YEAR && year <= MAX_YEAR))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        if (!(month >= JAN && month <= DEC))
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        
        if ((year >= MIN_YEAR && year <= MAX_YEAR) && (month >= JAN && month <= DEC))
        {
            printf("\n");
            printf("*** Log date set! ***\n");
            printf("\n");

            // Using switch case to display month names
            switch (month) 
            {
                case 1:
                    printf("Log starting date: %d-", year);
                    printf("JAN-01\n");
                    break;
                case 2:
                    printf("Log starting date: %d-", year);
                    printf("FEB-01\n");
                    break;
                case 3:
                    printf("Log starting date: %d-", year);
                    printf("MAR-01\n");
                    break;
                case 4:
                    printf("Log starting date: %d-", year);
                    printf("APR-01\n");
                    break;
                case 5:
                    printf("Log starting date: %d-", year);
                    printf("MAY-01\n");
                    break;
                case 6:
                    printf("Log starting date: %d-", year);
                    printf("JUN-01\n");
                    break;
                case 7:
                    printf("Log starting date: %d-", year);
                    printf("JUL-01\n");
                    break;
                case 8:
                    printf("Log starting date: %d-", year);
                    printf("AUG-01\n");
                    break;
                case 9:
                    printf("Log starting date: %d-", year);
                    printf("SEP-01\n");
                    break;
                case 10:
                    printf("Log starting date: %d-", year);
                    printf("OCT-01\n");
                    break;
                case 11:
                    printf("Log starting date: %d-", year);
                    printf("NOV-01\n");
                    break;
                case 12:
                    printf("Log starting date: %d-", year);
                    printf("DEC-01\n");
                    break;
            }

            continue_loop = 0;
        }
    }

    return 0;
}