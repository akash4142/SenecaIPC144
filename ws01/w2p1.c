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
    float price1,price2,price3,sub_total,Taxes,TAX,Total;
    int  contains;
    const double TAX = 0.13;
    const char patSize = 'S';
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $17.96\n");
    scanf("%f", &price1);
    printf("Enter the price for a MEDIUM shirt: $26.96\n");
    scanf("%f", &price2);
    printf("Enter the price for a LARGE shirt: $35.97\n\n");
    scanf("%f", &price3);
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL : $17.96\n");
    printf("MEDIUM : $26.96\n");
    printf("LARGE : $35.97\n");
    printf("Patty's shirt size is 'S'\n");
    printf("Number of shirts Patty is buying: \n\n");
    scanf("%d", &contains);
    sub_total = contains * 17.96;
    Taxes = sub_total * TAX;
    Taxes *= 100;
    Taxes += 0.5;
    (int)Taxes= Taxes;
    Taxes=Taxes*100;

    Total = sub_total + Taxes;

    printf("Patty's shopping cart...");
    printf("Contains : %d shirts", contains);
    printf("Sub-total: $%f", sub_total);
    printf("Taxes    : $%f", Taxes);
    printf("Total    : $%f", Total);

    return 0;
}