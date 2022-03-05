/*
*****************************************************************************
                          Workshop - #6 (P1)
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

#define MAX_ITEMS 10

int main(void)
{
    // Declaring variables
    double monthlyNetIncome;
    int wishListItems;
    const double min_cost = 100.00;

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");
    printf("\n");

    // Prompting the user for their NET monthly income
    do {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &monthlyNetIncome);

        if (monthlyNetIncome < 500.00) 
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
        }

        if (monthlyNetIncome > 400000.00)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
        }

        printf("\n");
    }
    while(!(monthlyNetIncome >= 500.00 && monthlyNetIncome <= 400000.00));

    // Prompting the user to specify the number of wish list items they want to use in the forecast
    do {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wishListItems);

        if (!(wishListItems > 0 && wishListItems <= MAX_ITEMS)) 
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        printf("\n");
    }
    while(!(wishListItems > 0 && wishListItems <= MAX_ITEMS));

    // Declaring Arrays
    double cost[wishListItems];
    int priority[wishListItems];
    char finance_options[wishListItems];

    // Using a for loop to display individual item details
    int i;
    for (i = 1; i <= wishListItems; i++)
    {
        printf("Item-%d Details:\n", i);

        // Cost
        do {
            printf("   Item cost: $");
            scanf("%lf", &cost[i - 1]);

            if (cost[i - 1] < min_cost)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            } 
        }
        while (cost[i - 1] < min_cost);

        // Priority
        do {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i - 1]);

            if ((priority[i - 1] < 1) || (priority[i - 1] > 3))
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            } 
        }
        while ((priority[i - 1] < 1) || (priority[i - 1] > 3));

        // Financing options
        do {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance_options[i - 1]);

            if (!(finance_options[i - 1] == 'n' || finance_options[i - 1] == 'y'))
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            } 
        }
        while (!(finance_options[i - 1] == 'n' || finance_options[i - 1] == 'y'));

        printf("\n");
    }

    // Summary table
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    
    // Using iteration to display all the details
    int j;
    double total_cost = 0;
    for(j = 1; j <= wishListItems; j++)
    {
        printf("  %d      %d        %c     %10.2lf\n", j, priority[j - 1], finance_options[j - 1], cost[j - 1]);
        total_cost += cost[j - 1];
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $ %.2lf\n", total_cost);
    printf("\n");

    // Ending line
    printf("Best of luck in all your future endeavours!\n");

    return 0;
}