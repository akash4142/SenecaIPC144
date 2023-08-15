/*
*****************************************************************************
						  Workshop - #8 (P2)
Full Name  : AKASH YADAV
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


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p2.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr) {
	int num;
	int flag = 1;

	do {
		scanf("%d", &num);
		if (num <= 0)
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
		*int_ptr = num;
	}
	return num;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr) {
	double num2;
	int flag = 1;

	do {
		scanf("%lf", &num2);
		if (num2 <= 0)
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
		*double_ptr = num2;
	}
	return num2;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number) {

	printf("Cat Food Cost Analysis\n");
	printf("======================\n");
	printf("\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", Max_Products);
	printf("NOTE: A 'serving' is %dg\n", GRAMS);
	printf("\n");
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int index) {
	struct CatFoodInfo info;
	int flag;
	printf("Cat Food Product #%d\n", index + 1);
	printf("--------------------\n");
	flag = 1;

	// SKU
	printf("SKU           : ");
	flag = 1;
	do {
		scanf("%d", &info.skuNumber);
		if (info.skuNumber <= 0)
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
		scanf("%lf", &info.productPrice);
		if (info.productPrice <= 0)
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
		scanf("%lf", &info.productWeight);
		if (info.productWeight <= 0)
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
		scanf("%d", &info.calories);
		if (info.calories <= 0)
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
	return info;

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

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* resultToKg) {

	double poundsToKg = (*pounds) / POUNDS_TO_KG;

	if (resultToKg != NULL)
	{
		*resultToKg = poundsToKg;
	}

	return poundsToKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* resultToG) {

	int poundsToG = ((*pounds) / POUNDS_TO_KG) * 1000;

	if (resultToG != NULL)
	{
		*resultToG = poundsToG;
	}

	return poundsToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* resultToKg, int* resultToG) {

	double poundsToKg = (*pounds) / POUNDS_TO_KG;
	int poundsToG = ((*pounds) / POUNDS_TO_KG) * 1000;

	if (resultToG != NULL && resultToKg != NULL)
	{
		*resultToG = poundsToG;
		*resultToKg = poundsToKg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numberOfServings) {

	double servings = ((double)totalGrams) / servingSizeGrams;

	if (numberOfServings != NULL)
	{
		*numberOfServings = servings;
	}

	return servings;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numberOfServings, double* result) {

	double costPerServing = (*price) / (*numberOfServings);

	if (result != NULL)
	{
		*result = costPerServing;
	}
	return costPerServing;
}


// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCalories, double* result) {

	double costPerCal = (*price) / (*totalCalories);

	if (result != NULL)
	{
		*result = costPerCal;
	}

	return costPerCal;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo info) {

	struct ReportData Data;

	// Assigning Values
	Data.skuNumber = info.skuNumber;
	Data.productPrice = info.productPrice;
	Data.productWeightPounds = info.productWeight;
	Data.calories = info.calories;

	// Assigning calculated values
	Data.productWeightKilos = convertLbsKg(&Data.productWeightPounds, &Data.productWeightKilos);
	Data.productWeightGrams = convertLbsG(&Data.productWeightPounds, &Data.productWeightGrams);
	Data.servings = calculateServings(GRAMS, Data.productWeightGrams, &Data.servings);

	// Total calories
	double totalCalories = Data.calories * Data.servings;

	Data.costPerServing = calculateCostPerServing(&Data.productPrice, &Data.servings, &Data.costPerServing);
	Data.costCaloriesPerServing = calculateCostPerCal(&Data.productPrice, &totalCalories, &Data.costCaloriesPerServing);


	// Returning the struct
	return Data;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", GRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData Data, const int cheapestProductCheck) {

	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", Data.skuNumber, Data.productPrice, Data.productWeightPounds, Data.productWeightKilos, Data.productWeightGrams, Data.calories, Data.servings, Data.costPerServing, Data.costCaloriesPerServing);
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo info) {
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%5.2lf\n", info.skuNumber, info.productPrice);
	printf("\n");

	// Ending line
	printf("Happy shopping!\n");
	printf("\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	// Struct Arrays
	struct ReportData Data[Max_Products] = { {0} };
	struct CatFoodInfo info[Max_Products] = { {0} };

	// Declaring variables
	int j, cheapestIndex = 0;

	// Printing the opening message
	openingMessage(Max_Products);

	// Filling the cfi array
	for (j = 0; j < Max_Products; j++) {
		info[j] = getCatFoodInfo(j);
		Data[j] = calculateReportData(info[j]);
	}

	// Dsiplaying cat food header
	displayCatFoodHeader();

	// Displaying cat food data
	for (j = 0; j < Max_Products; j++) {
		displayCatFoodData(info[j].skuNumber, &info[j].productPrice, info[j].calories, &info[j].productWeight);
	}

	// Determining the cheapest product's sku and price
	double cheapestProductPrice = Data[0].costPerServing;
	for (j = 0; j < Max_Products; j++)
	{
		if (Data[j].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = Data[j].costPerServing;
			cheapestIndex = j;
		}
	}
	printf("\n");

	// Displaying the report header
	displayReportHeader();

	// Displaying the report data
	for (j = 0; j < Max_Products; j++)
	{
		displayReportData(Data[j], cheapestIndex);

		if (cheapestIndex == j)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");

	// Displaying final analysis
	for (j = 0; j < Max_Products; j++)
	{
		if (j == cheapestIndex)
		{
			displayFinalAnalysis(info[j]);
		}
	}
}

