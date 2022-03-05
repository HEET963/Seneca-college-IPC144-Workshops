 /*
*****************************************************************************
                          Workshop - #2 (P1)
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

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    // Initializing Variables
    // Product ID
    const int product_1_ID = 111;
    const int product_2_ID = 222; 
    const int product_3_ID = 111; 

    // Price
    const double product_1_price = 111.49;
    const double product_2_price = 222.99;
    const double product_3_price = 334.49;

    // Taxed or not
    const char product_1_tax = 'Y';
    const char product_2_tax = 'N';
    const char product_3_tax = 'N';

    // Average price of all 3 products
    double average_price = (product_1_price + product_2_price + product_3_price) / 3;

    // Displaying the output
    printf("Product Information\n");
    printf("===================\n");

    // Product 1
    printf("Product-1 (ID:%d)\n", product_1_ID);
    printf("  Taxed: %c\n", product_1_tax);
    printf("  Price: $%.4lf\n", product_1_price);
    printf("\n");

    // Product 2
    printf("Product-2 (ID:%d)\n", product_2_ID);
    printf("  Taxed: %c\n", product_2_tax);
    printf("  Price: $%.4lf\n", product_2_price);
    printf("\n");

    // Product 3
    printf("Product-3 (ID:%d)\n", product_3_ID);
    printf("  Taxed: %c\n", product_3_tax);
    printf("  Price: $%.4lf\n", product_3_price);
    printf("\n");

    // Average of all prices
    printf("The average of all prices is: $%.4lf\n", average_price);
    printf("\n");

    // Some information
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n");
    printf("\n");

    // Data Analysis
    printf("Some Data Analysis...\n");
    printf("=====================\n");

    printf("1. Is product 1 taxable? -> %d\n\n", product_1_tax == 'Y');

    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", product_2_tax && product_3_tax != 'Y');

    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, product_3_price < testValue);

    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", product_3_price > product_1_price + product_2_price);

    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", product_1_price >= product_3_price - product_2_price, product_3_price - product_2_price);

    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", product_2_price >= average_price);

    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (product_2_ID != product_1_ID) && (product_3_ID != product_1_ID));

    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (product_1_ID != product_2_ID) && (product_3_ID != product_2_ID));

    printf("9. Based on product ID, product 3 is unique -> %d\n", (product_1_ID != product_3_ID) && (product_2_ID != product_3_ID));

    return 0;
}