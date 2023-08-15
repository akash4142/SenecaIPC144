/*
*****************************************************************************
                          Workshop - #8 (P1)
Full Name  : akash yadav
Student ID#: 172566218
Email      : ayadav35@myseneca.ca
Section    : NII

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#define max_Products 3
#define num_Grams 64

// System Libraries
#include<stdio.h>

// User Libraries
#include"w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* posnumber) {
	int input;
	do {
		scanf("%d", &input);
		if (input <= 0) {
			printf("ERROR: Enter a positive value: ");
		}
    
	} while (input <= 0);

	if (posnumber != NULL)
	{
		*posnumber = input;
	}
	return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* num) {
	double input;
	do {
		scanf("%lf", &input);
		if (input <= 0) {
			printf("ERROR: Enter a positive value: ");
		}
	} while (input <= 0);
	if (num != NULL)
	{
		*num = input;
	}
	return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int num_products) {
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\nNOTE: A 'serving' is %dg\n", max_Products, num_Grams);

}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int index) {
	printf("\nCat Food Product #%d\n",index+1);
	printf("--------------------\n");
	int flag = 1;
	struct CatFoodInfo info ;
	printf("SKU           : ");
	flag = 1;
	do {
		scanf("%d", &info.sku_num);
		if (info.sku_num <= 0) {
			printf("ERROR: Enter a positive value: ");
		}
		else {
			flag = 0;
		}
	}while (flag);


	printf("PRICE         : $");
	flag = 1;
	do{
		scanf("%lf", &info.product_price);
		if (info.product_price <= 0) {
			printf("ERROR: Enter a positive value: ");
		}
		else {
			flag = 0;
		}
	}while (flag);

	

	printf("WEIGHT (LBS)  : ");
	flag = 1;
	do{
		scanf("%lf", &info.weight);
		if (info.weight<= 0) {
			printf("ERROR: Enter a positive value: ");
		}
		else {
			flag = 0;
		}
	}while (flag);

	printf("CALORIES/SERV.: ");
	flag = 1;
	do {
		scanf("%d", &info.calories);
		if (info.calories <= 0) {
			printf("ERROR: Enter a positive value: ");
		}
		else {
			flag = 0;
		}
	} while (flag);
	return info;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int skunumber, const double* price, const int calories, const double* weight) {
	printf("%07d %10.2lf %10.1lf %8d\n",skunumber, *price, *weight,calories);
	return;
}

// 7. Logic entry point
void start(void)
{
	struct CatFoodInfo info[max_Products];
	int i;
	openingMessage(max_Products);
	for (i = 0; i < max_Products; i++)
	{
		info[i] = getCatFoodInfo(i);
	}
	displayCatFoodHeader();
	for (i = 0; i < max_Products; i++) {
		displayCatFoodData(info[i].sku_num,&info[i].product_price, info[i].calories ,&info[i].weight);
	}
	return;
}