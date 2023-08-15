

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*****************************************************************************
<assessment name example: Workshop - #2 (Part-1)>
Full Name :AKASH YADAV
Student ID#:172566218
Email :ayadav35@myseneca.ca
Section :NII
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************/

int main(void)
{
    double price1, price2, price3, subtotal1, tax1, total_tax1, total1, subtotal2, tax2, total_tax2, total2, subtotal3, tax3, total_tax3, total3, grand_total;
    int quantity1, quantity2, quantity3, total_quantity;
    int toonies, loonies, quarters, dimes, nickels, pennies;
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double subtotal_sum, final_tax, Balance;
    double  average1, average2;
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
    printf("SMALL  : $%.2lf\n", price1);
    printf("MEDIUM : $%.2lf\n", price2);
    printf("LARGE  : $%.2lf\n\n", price3);
    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &quantity1);
    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &quantity2);
    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &quantity3);

    subtotal1 = price1 * quantity1;
    tax1 = subtotal1 * TAX;
    tax1 = (tax1 * 100) + 0.5;
    total_tax1 = (int)tax1;
    total_tax1 = total_tax1 / 100;
    total1 = subtotal1 + total_tax1;

    subtotal3 = price2 * quantity3;
    tax3 = subtotal3 * TAX;
    tax3 = (tax3 * 100) + 0.5;
    total_tax3 = (int)tax3;
    total_tax3 = total_tax3 / 100;
    total3 = subtotal3 + total_tax3;

    subtotal2 = price3 * quantity2;
    tax2 = subtotal2 * TAX;
    tax2 = (tax2 * 100) + 0.5;
    total_tax2 = (int)tax2;
    total_tax2 = total_tax2 / 100;
    total2 = subtotal2 + total_tax2;
    total_quantity = quantity1 + quantity2 + quantity3;
    subtotal_sum = subtotal1 + subtotal2 + subtotal3;
    final_tax = total_tax1 + total_tax2 + total_tax3;
    grand_total = total1 + total2 + total3;

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    printf("\nPatty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", patSize, price1, quantity1, subtotal1, total_tax1, total1);
    printf("\nSally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", salSize, price2, quantity3, subtotal3, total_tax3, total3);
    printf("\nTommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", tomSize, price3, quantity2, subtotal2, total_tax2, total2);
    printf("\n-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", subtotal_sum, final_tax, grand_total);
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %.4lf\n", subtotal_sum);
    subtotal_sum *= 100;
    toonies = subtotal_sum / 200;
    Balance = subtotal_sum - (toonies * 200);
    printf("Toonies  %3d %9.4lf\n", toonies, Balance / 100);
    loonies = Balance / 100;
    Balance = Balance - (loonies * 100);
    printf("Loonies  %3d %9.4lf\n", loonies, Balance / 100);
    quarters = Balance / 25;
    Balance = Balance - (quarters * 25);
    printf("Quarters %3d %9.4lf\n", quarters, Balance / 100);
    dimes = Balance / 10;
    Balance = Balance - (dimes * 10);
    printf("Dimes    %3d %9.4lf\n", dimes, Balance / 100);
    nickels = Balance / 5;
    Balance = Balance - (nickels * 5);
    printf("Nickels  %3d %9.4lf\n", nickels, Balance / 100);
    pennies = Balance / 1;
    Balance = Balance - (pennies * 1);
    printf("Pennies  %3d %9.4lf\n\n", pennies, Balance / 100);

    average1 = subtotal_sum / (total_quantity * 100);
    printf("Average cost/shirt: $%.4lf\n\n", average1);

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %.4lf\n", grand_total);
    grand_total *= 100;
    toonies = grand_total / 200;
    Balance = grand_total - (toonies * 200);
    printf("Toonies  %3d %9.4lf\n", toonies, Balance / 100);
    loonies = Balance / 100;
    Balance = Balance - (loonies * 100);
    printf("Loonies  %3d %9.4lf\n", loonies, Balance / 100);
    quarters = Balance / 25;
    Balance = Balance - (quarters * 25);
    printf("Quarters %3d %9.4lf\n", quarters, Balance / 100);
    dimes = Balance / 10;
    Balance = Balance - (dimes * 10);
    printf("Dimes    %3d %9.4lf\n", dimes, Balance / 100);
    nickels = Balance / 5;
    Balance = Balance - (nickels * 5);
    printf("Nickels  %3d %9.4lf\n", nickels, Balance / 100);
    pennies = Balance / 1;
    Balance = Balance - (pennies * 1);
    printf("Pennies  %3d %9.4lf\n\n", pennies, Balance / 100);

    average2 = grand_total / (total_quantity * 100);
    printf("Average cost/shirt: $%.4lf\n", average2);


    return 0;
}

