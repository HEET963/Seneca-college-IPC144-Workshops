/*
*****************************************************************************
                          Workshop - #3 (P1)
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
    const double TAX = 0.13;
    const char patSize = 'S';

    // Declaring variables
    double small_shirt_price, medium_shirt_price, large_shirt_price;
    int number_of_shirts, total, subtotal, tax_calc;

    // Displaying the output
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &small_shirt_price);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &medium_shirt_price);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &large_shirt_price);
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n", small_shirt_price);
    printf("MEDIUM : $%.2lf\n", medium_shirt_price);
    printf("LARGE  : $%.2lf\n\n", large_shirt_price);

    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &number_of_shirts);
    printf("\n");

    subtotal = small_shirt_price * 100 * number_of_shirts;
    tax_calc = subtotal * TAX + 0.5;
    total = subtotal + tax_calc;

    printf("%d\n", subtotal);

    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", number_of_shirts);
    printf("Sub-total: $%8.4lf\n",  ((double) subtotal) / 100);
    printf("Taxes    : $%8.4lf\n",  ((double) tax_calc) / 100);
    printf("Total    : $%8.4lf\n",  ((double) total) / 100);

    return 0;
}