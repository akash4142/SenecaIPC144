/*
*****************************************************************************
                          Workshop - #2 (P1)
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

#include <stdio.h>

int main(void)
{
    double price1,price2,price3,sub_total,Taxes,Total=0 ,final_tax;
    int  contains;
    const double TAX = 0.13;
    const char patSize = 'S';
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &price1);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &price2);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &price3);
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%0.2lf\n",price1);
    printf("MEDIUM : $%0.2lf\n",price2);
    printf("LARGE  : $%0.2lf\n\n",price3);
    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &contains);
    

    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n", contains);
    sub_total = contains * price1;
    printf("Sub-total: $%.4lf\n", sub_total);
    Taxes = sub_total * TAX;
    Taxes = (Taxes * 100) + 0.5;
    final_tax = (int)Taxes;
    final_tax=final_tax/100;
    printf("Taxes    : $ %0.4lf\n", final_tax);
    Total = sub_total + final_tax;
    printf("Total    : $%0.4lf\n", Total);

    return 0;
}