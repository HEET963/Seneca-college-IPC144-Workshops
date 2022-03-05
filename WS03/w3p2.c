/*
*****************************************************************************
                          Workshop - #3 (P2)
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

int main() 
{
    // Constant variables
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    const double TAX = 0.13;

    // Declaring variables
    double small_shirt_price, medium_shirt_price, large_shirt_price;
    int number_of_shirts_patty, number_of_shirts_tommy, number_of_shirts_sally, subtotal_patty, tax_calc_patty, total_patty, tax_calc_sally, subtotal_sally, total_sally, subtotal_tommy, tax_calc_tommy, total_tommy;
    int final_subtotal, final_tax, final_total;
    double grand_sub_average = 0,grand_total_average = 0, sub_number_of_shirts_patty = 0, sub_number_of_shirts_sally = 0, sub_number_of_shirts_tommy = 0;
    

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

    // Patty's information
    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &number_of_shirts_patty);
    printf("\n");

    subtotal_patty = small_shirt_price * 100 * number_of_shirts_patty;
    tax_calc_patty = subtotal_patty * TAX + 0.5;
    total_patty = subtotal_patty + tax_calc_patty;

    // Tommy's Information
    printf("Tommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &number_of_shirts_tommy);
    printf("\n");

    subtotal_tommy = large_shirt_price * 100 * number_of_shirts_tommy;
    tax_calc_tommy = subtotal_tommy * TAX + 0.5;
    total_tommy = subtotal_tommy + tax_calc_tommy;

    // Sally's information
    printf("Sally's shirt size is \'%c\'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &number_of_shirts_sally);
    printf("\n");

    subtotal_sally = medium_shirt_price * 100 * number_of_shirts_sally;
    tax_calc_sally = subtotal_sally * TAX + 0.5;
    total_sally = subtotal_sally + tax_calc_sally;

    // Sales table
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, small_shirt_price, number_of_shirts_patty, (subtotal_patty + 0.0) / 100, (tax_calc_patty + 0.0) / 100, (total_patty + 0.0) / 100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, medium_shirt_price, number_of_shirts_sally,(subtotal_sally + 0.0) / 100, (tax_calc_sally + 0.0) / 100, (total_sally + 0.0) / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, large_shirt_price, number_of_shirts_tommy, (subtotal_tommy + 0.0) / 100, (tax_calc_tommy + 0.0) / 100, (total_tommy + 0.0) / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");

    // Calculating the final values
    final_subtotal = (subtotal_patty + 0.0) / 100 +  (subtotal_sally + 0.0) / 100 + (subtotal_tommy = 0.0) / 100;
    final_tax = tax_calc_patty + tax_calc_sally + tax_calc_tommy;
    final_total = total_patty + total_sally + total_tommy;

    printf("                         %8.4lf  %8.4lf  %8.4lf\n", final_subtotal / 100.0, final_tax / 100.0, final_total / 100.0);
    printf("\n");

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");

    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", final_subtotal/100.0);
    printf("Toonies  %3d %9.4lf\n", final_subtotal / 200, (final_subtotal % 200) / 100.0);
    final_subtotal %= 200;
    printf("Loonies  %3d %9.4lf\n", final_subtotal / 100, (final_subtotal % 100) / 100.0);
    final_subtotal %= 100;
    printf("Quarters %3d %9.4lf\n", final_subtotal / 25, (final_subtotal % 25) / 100.0);
    final_subtotal %= 25;
    printf("Dimes    %3d %9.4lf\n", final_subtotal / 10, (final_subtotal % 10) / 100.0);
    final_subtotal %= 10;
    printf("Nickels  %3d %9.4lf\n", final_subtotal / 5, (final_subtotal % 5) / 100.0);
    final_subtotal %= 5;
    printf("Pennies  %3d %9.4lf\n\n", final_subtotal / 1, (final_subtotal % 1) / 100.0);
    final_subtotal %= 1;

    grand_sub_average = (subtotal_patty + subtotal_sally + subtotal_tommy) / 100.0;
    sub_number_of_shirts_patty = number_of_shirts_patty;
    sub_number_of_shirts_sally = number_of_shirts_sally;
    sub_number_of_shirts_tommy = number_of_shirts_tommy;

    printf("Average cost/shirt: $%.4lf\n\n", grand_sub_average / (sub_number_of_shirts_patty + sub_number_of_shirts_sally + sub_number_of_shirts_tommy));



    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", final_total / 100.0);
    printf("Toonies  %3d %9.4lf\n", final_total / 200, (final_total % 200) / 100.0);
    final_total %= 200;
    printf("Loonies  %3d %9.4lf\n", final_total / 100, (final_total % 100) / 100.0);
    final_total %= 100;
    printf("Quarters %3d %9.4lf\n", final_total / 25, (final_total % 25) / 100.0);
    final_total %= 25;
    printf("Dimes    %3d %9.4lf\n", final_total / 10, (final_total % 10) / 100.0);
    final_total %= 10;
    printf("Nickels  %3d %9.4lf\n", final_total / 5, (final_total % 5) / 100.0);
    final_total %= 5;
    printf("Pennies  %3d %9.4lf\n\n", final_total / 1, (final_total % 1) / 100.0);
    final_total %= 1;

    grand_total_average = (total_patty + total_sally + total_tommy) / 100.0;
    printf("Average cost/shirt: $%2.4f", grand_total_average / (sub_number_of_shirts_patty + sub_number_of_shirts_sally + sub_number_of_shirts_tommy));

    return 0;
}