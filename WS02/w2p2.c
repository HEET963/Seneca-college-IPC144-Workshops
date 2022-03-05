/*
*****************************************************************************
                          Workshop - #2 (P2)
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
#include <ctype.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    // Declaring variables
    // Variables used to represent the product data records
    char CFE1_type, CFE2_type, CFE3_type;
    char CFE1_grind_size, CFE2_grind_size, CFE3_grind_size;
    int CFE1_bag_weight, CFE2_bag_weight, CFE3_bag_weight;
    char CFE1_cream_or_not, CFE2_cream_or_not, CFE3_cream_or_not;
    double CFE1_temp, CFE2_temp, CFE3_temp;

    // Variables used to store the user-input values for user preferences
    char coffee_strength, coffee_with_cream, maker;
    int daily_servings;

    // Displaying the output
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");

    printf("Enter the coffee product information being sold today...\n\n");

    // Asking input for the product data records
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &CFE1_type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &CFE1_grind_size);
    printf("Bag weight (g): ");
    scanf(" %d", &CFE1_bag_weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CFE1_cream_or_not);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &CFE1_temp);
    printf("\n");

    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &CFE2_type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &CFE2_grind_size);
    printf("Bag weight (g): ");
    scanf(" %d", &CFE2_bag_weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CFE2_cream_or_not);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &CFE2_temp);
    printf("\n");

    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &CFE3_type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &CFE3_grind_size);
    printf("Bag weight (g): ");
    scanf(" %d", &CFE3_bag_weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CFE3_cream_or_not);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &CFE3_temp);
    printf("\n");

    // Table to represent the product data records
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");

    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (CFE1_type == 'L' || CFE1_type == 'l'), (CFE1_type == 'B' || CFE1_type == 'b'), (CFE1_grind_size == 'C' || CFE1_grind_size == 'c'), (CFE1_grind_size == 'F' || CFE1_grind_size == 'f'), CFE1_bag_weight, CFE1_bag_weight / GRAMS_IN_LBS, (CFE1_cream_or_not == 'Y' || CFE1_cream_or_not == 'y'), CFE1_temp, (CFE1_temp * 9/5) + 32);

    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (CFE2_type == 'L' || CFE2_type == 'l'), (CFE2_type == 'B' || CFE2_type == 'b'), (CFE2_grind_size == 'C' || CFE2_grind_size == 'c'), (CFE2_grind_size == 'F' || CFE2_grind_size == 'f'), CFE2_bag_weight, CFE2_bag_weight / GRAMS_IN_LBS, (CFE2_cream_or_not == 'Y' || CFE2_cream_or_not == 'y'), CFE2_temp, (CFE2_temp * 9/5) + 32);
    
    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (CFE3_type == 'L' || CFE3_type == 'l'), (CFE3_type == 'B' || CFE3_type == 'b'), (CFE3_grind_size == 'C' || CFE3_grind_size == 'c'), (CFE3_grind_size == 'F' || CFE3_grind_size == 'f'), CFE3_bag_weight, CFE3_bag_weight / GRAMS_IN_LBS, (CFE3_cream_or_not == 'Y' || CFE3_cream_or_not == 'y'), CFE3_temp, (CFE3_temp * 9/5) + 32);

    printf("\n");

    // Asking the user for preferences
    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");

    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee_with_cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &daily_servings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);
    printf("\n");

    // First table for user preferences
    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");    

    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", ((CFE1_type == 'L' || CFE1_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE1_type == 'B' || CFE1_type == 'b') && (coffee_strength == 'R' || coffee_strength == 'r')), ((CFE1_grind_size == 'C' || CFE1_grind_size == 'c') && (maker == 'R' || maker == 'r')) || (((CFE1_grind_size == 'F' || CFE1_grind_size == 'f')) && ((maker == 'C' || maker == 'c'))), ((daily_servings >= 1 && daily_servings <= 4) && (CFE1_bag_weight >= 0 && CFE1_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE1_bag_weight > 250 && CFE1_bag_weight <= 500)) || (daily_servings >= 10 && (CFE1_bag_weight > 500 && CFE1_bag_weight <= 1000)), ((CFE1_cream_or_not == 'Y' || CFE1_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE1_cream_or_not == 'N' || CFE1_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')), ((maker == 'R' || maker == 'r') && (CFE1_temp >= 60.0 && CFE1_temp <= 69.9)) || ((maker == 'C' || maker == 'c') && CFE1_temp >= 70.0));

    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((CFE2_type == 'L' || CFE2_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE2_type == 'B' || CFE2_type == 'b') && (coffee_strength == 'R' || coffee_strength == 'r')), ((CFE2_grind_size == 'C' || CFE2_grind_size == 'c') && (maker == 'R' || maker == 'r')) || (((CFE2_grind_size == 'F' || CFE2_grind_size == 'f')) && ((maker == 'C' || maker == 'c'))), ((daily_servings >= 1 && daily_servings <= 4) && (CFE2_bag_weight >= 0 && CFE2_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE2_bag_weight > 250 && CFE2_bag_weight <= 500)) || (daily_servings >= 10 && (CFE2_bag_weight > 500 && CFE2_bag_weight <= 1000)), ((CFE2_cream_or_not == 'Y' || CFE2_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE2_cream_or_not == 'N' || CFE2_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')), ((maker == 'R' || maker == 'r') && (CFE2_temp >= 60.0 && CFE2_temp <= 69.9)) || ((maker == 'C' || maker == 'c') && CFE2_temp >= 70.0));

    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n", ((CFE3_type == 'L' || CFE3_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE3_type == 'B' || CFE3_type == 'b') && (coffee_strength == 'R' || coffee_strength == 'r')), ((CFE3_grind_size == 'C' || CFE3_grind_size == 'c') && (maker == 'R' || maker == 'r')) || (((CFE3_grind_size == 'F' || CFE3_grind_size == 'f')) && ((maker == 'C' || maker == 'c'))), ((daily_servings >= 1 && daily_servings <= 4) && (CFE3_bag_weight >= 0 && CFE3_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE3_bag_weight > 250 && CFE3_bag_weight <= 500)) || (daily_servings >= 10 && (CFE3_bag_weight > 500 && CFE3_bag_weight <= 1000)), ((CFE3_cream_or_not == 'Y' || CFE3_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE3_cream_or_not == 'N' || CFE3_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')), ((maker == 'R' || maker == 'r') && (CFE3_temp >= 60.0 && CFE3_temp <= 69.9)) || ((maker == 'C' || maker == 'c') && CFE3_temp >= 70.0));

    printf("\n");

    // Asking the user for preferences
    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");

    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee_with_cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &daily_servings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);
    printf("\n");

    // Second table for user preferences
    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");

    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", ((CFE1_type == 'L' || CFE1_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE1_type == 'B' || CFE1_type == 'b') && (coffee_strength == 'R' || coffee_strength == 'r')), ((CFE1_grind_size == 'C' || CFE1_grind_size == 'c') && (maker == 'R' || maker == 'r')) || (((CFE1_grind_size == 'F' || CFE3_grind_size == 'f')) && ((maker == 'C' || maker == 'c'))), ((daily_servings >= 1 && daily_servings <= 4) && (CFE1_bag_weight >= 0 && CFE1_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE1_bag_weight > 250 && CFE1_bag_weight <= 500)) || (daily_servings >= 10 && (CFE1_bag_weight > 500 && CFE1_bag_weight <= 1000)), ((CFE1_cream_or_not == 'Y' || CFE1_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE1_cream_or_not == 'N' || CFE1_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')), ((maker == 'R' || maker == 'r') && (CFE1_temp >= 60.0 && CFE1_temp <= 69.9)) || ((maker == 'C' || maker == 'c') && CFE1_temp >= 70.0));

    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((CFE2_type == 'L' || CFE2_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE2_type == 'B' || CFE2_type == 'b') && (coffee_strength == 'R' || coffee_strength == 'r')), ((CFE2_grind_size == 'C' || CFE2_grind_size == 'c') && (maker == 'R' || maker == 'r')) || (((CFE2_grind_size == 'F' || CFE2_grind_size == 'f')) && ((maker == 'C' || maker == 'c'))), ((daily_servings >= 1 && daily_servings <= 4) && (CFE2_bag_weight >= 0 && CFE2_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE2_bag_weight > 250 && CFE2_bag_weight <= 500)) || (daily_servings >= 10 && (CFE2_bag_weight > 500 && CFE2_bag_weight <= 1000)), ((CFE2_cream_or_not == 'Y' || CFE2_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE2_cream_or_not == 'N' || CFE2_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')), ((maker == 'R' || maker == 'r') && (CFE2_temp >= 60.0 && CFE2_temp <= 69.9)) || ((maker == 'C' || maker == 'c') && CFE2_temp >= 70.0));

    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n", ((CFE3_type == 'L' || CFE3_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE3_type == 'B' || CFE3_type == 'b') && (coffee_strength == 'R' || coffee_strength == 'r')), ((CFE3_grind_size == 'C' || CFE3_grind_size == 'c') && (maker == 'R' || maker == 'r')) || (((CFE3_grind_size == 'F' || CFE3_grind_size == 'f')) && ((maker == 'C' || maker == 'c'))), ((daily_servings >= 1 && daily_servings <= 4) && (CFE3_bag_weight >= 0 && CFE3_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE3_bag_weight > 250 && CFE3_bag_weight <= 500)) || (daily_servings >= 10 && (CFE3_bag_weight > 500 && CFE3_bag_weight <= 1000)), ((CFE3_cream_or_not == 'Y' || CFE3_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE3_cream_or_not == 'N' || CFE3_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')), ((maker == 'R' || maker == 'r') && (CFE3_temp >= 60.0 && CFE3_temp <= 69.9)) || ((maker == 'C' || maker == 'c') && CFE3_temp >= 70.0));
    printf("\n");

    // Last line of the program
    printf("Hope you found a product that suits your likes!\n");

    return 0;
}