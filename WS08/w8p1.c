/*
*****************************************************************************
                          Workshop - #8 (P1)
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


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr) {
	int input;
	int flag = 1;

	do {
		scanf("%d", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	if (int_ptr != NULL)
	{
		*int_ptr = input;
	}
	return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr) {
	double input;
	int flag = 1;

	do {
		scanf("%lf", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	if (double_ptr != NULL)
	{
		*double_ptr = input;
	}
	return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number) {

	printf("Cat Food Cost Analysis\n");
	printf("======================\n");
	printf("\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_PRODUCTS);
	printf("NOTE: A 'serving' is %dg\n", GRAMS_NUMBER);
	printf("\n");
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int seq_number) {
	struct CatFoodInfo cfi;
	int flag;
	printf("Cat Food Product #%d\n", seq_number + 1);
	printf("--------------------\n");
	flag = 1;

	// SKU
	printf("SKU           : ");
	flag = 1;
	do {
		scanf("%d", &cfi.skuNumber);
		if (cfi.skuNumber <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		} 
	} while (flag);

	// Price
	printf("PRICE         : $");
	flag = 1;
	do {
		scanf("%lf", &cfi.productPrice);
		if (cfi.productPrice <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		} 
	} while (flag);

	// Weight
	printf("WEIGHT (LBS)  : ");
	flag = 1;
	do {
		scanf("%lf", &cfi.productWeight);
		if (cfi.productWeight <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		} 
	} while (flag);

	// Calories
	printf("CALORIES/SERV.: ");
	flag = 1;
	do {
		scanf("%d", &cfi.calories);
		if (cfi.calories <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		} 
	} while (flag);

	printf("\n");

	// Returning the struct
	return cfi;

}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku_number, double* product_price, int calorie_per_serving, double* product_weight_lbs) 
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku_number, *product_price, *product_weight_lbs, calorie_per_serving);
}

// 7. Logic entry point
void start(void)
{
	int i;
	struct CatFoodInfo cfi[MAX_PRODUCTS] = { {0} };
	openingMessage(MAX_PRODUCTS);

	for (i = 0; i < MAX_PRODUCTS; i++) {
		cfi[i] = getCatFoodInfo(i);
	}

	displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCTS; i++) {
		displayCatFoodData(cfi[i].skuNumber, &cfi[i].productPrice, cfi[i].calories, &cfi[i].productWeight); 
	}

}