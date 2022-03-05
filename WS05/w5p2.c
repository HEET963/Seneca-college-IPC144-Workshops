/*
*****************************************************************************
                          Workshop - #5 (P2)
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

#define LOG_DAYS 3
#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    // Declaring Variables
    const int JAN = 1, DEC = 12;          // Initializing two unmodifiable integer variables
    int continue_loop = 1; // Flag
    int year, month;                      // Other variables
    double morning_rating, evening_rating, morning_rating_sum = 0, evening_rating_sum = 0;

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

            int i;
            for (i = 1; i <= LOG_DAYS; i++)
            {
                // Using switch case to display month names
                switch (month)
                {
                case 1:
                    printf("%d-JAN-0%d\n", year, i);
                    break;
                case 2:
                    printf("%d-FEB-0%d\n", year, i);
                    break;
                case 3:
                    printf("%d-MAR-0%d\n", year, i);
                    break;
                case 4:
                    printf("%d-APR-0%d\n", year, i);
                    break;
                case 5:
                    printf("%d-MAY-0%d\n", year, i);
                    break;
                case 6:
                    printf("%d-JUN-0%d\n", year, i);
                    break;
                case 7:
                    printf("%d-JUL-0%d\n", year, i);
                    break;
                case 8:
                    printf("%d-AUG-0%d\n", year, i);
                    break;
                case 9:
                    printf("%d-SEP-0%d\n", year, i);
                    break;
                case 10:
                    printf("%d-OCT-0%d\n", year, i);
                    break;
                case 11:
                    printf("%d-NOV-0%d\n", year, i);
                    break;
                case 12:
                    printf("%d-DEC-0%d\n", year, i);
                    break;
                }

                printf("   Morning rating (0.0-5.0): ");
                scanf("%lf", &morning_rating);
                
                while (!(morning_rating >= 0.0 && morning_rating <= 5.0))
                {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    printf("   Morning rating (0.0-5.0): ");
                    scanf("%lf", &morning_rating);
                }

                printf("   Evening rating (0.0-5.0): ");
                scanf("%lf", &evening_rating);

                while (!(evening_rating >= 0.0 && evening_rating <= 5.0))
                {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    printf("   Evening rating (0.0-5.0): ");
                    scanf("%lf", &evening_rating);
                }

                // Calculating the sum of morning and evening ratings
                morning_rating_sum += morning_rating;
                evening_rating_sum += evening_rating;
                printf("\n");
            }

            continue_loop = 0;
        }
    }

    // Displaying the summary
    printf("Summary\n");
    printf("=======\n");

    // Total ratings
    printf("Morning total rating: %.3lf\n", morning_rating_sum);
    printf("Evening total rating:  %.3lf\n", evening_rating_sum);
    printf("----------------------------\n");
    printf("Overall total rating: %.3lf\n", morning_rating_sum + evening_rating_sum);
    printf("\n");

    // Average ratings
    printf("Average morning rating:  %.1lf\n", morning_rating_sum / LOG_DAYS);
    printf("Average evening rating:  %.1lf\n", evening_rating_sum / LOG_DAYS);
    printf("----------------------------\n");
    printf("Average overall rating:  %.1lf\n", ((morning_rating_sum / LOG_DAYS) + (evening_rating_sum / LOG_DAYS)) / 2);
    printf("\n");

    return 0;
}