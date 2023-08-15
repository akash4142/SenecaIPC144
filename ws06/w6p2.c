/*
*****************************************************************************
                          Workshop - #6 (P2)
Full Name  :akash yadav
Student ID#:172566218
Email      :ayadav35@myseneca.ca
Section    :NII

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_ITEMS 10

int main(void)
{
    int i = 0, time, years, months, index = 0, selection, itemscount, count = 1, count1 = 0, flag = 0, priorityfilter;
    double netincome, cost[MAX_ITEMS], amount;
    char options[MAX_ITEMS];
    int priority[MAX_ITEMS];
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");

    do {
        printf("\nEnter your monthly NET income: $");
        scanf(" %lf", &netincome);
        if (netincome > 0 && netincome < 400000) {
            do {
                printf("\nHow many wish list items do you want to forecast?: ");
                scanf("%d", &itemscount);
                if (itemscount > 0 && itemscount < 11) {
                    i = 1;
                }
                else {
                    printf("ERROR: List is restricted to between 1 and 10 items.\n");
                }
            } while (i == 0);
        }
        else if (netincome < 500) {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
        }
        else if (netincome > 400000) {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
        }
    } while (i == 0);

    do {
        if (count1 == 0) {
            printf("\nItem-%d Details:\n", count);
            printf("   Item cost: $");
            scanf("%lf", &cost[index]);
        }
        else {
            printf("   Item cost: $");
            scanf("%lf", &cost[index]);
        }
        if (cost[index] > 100) {
            do {

                printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
                scanf("%d", &priority[index]);
                if (priority[index] > 0 && priority[index] < 4) {
                    do {
                        printf("   Does this item have financing options? [y/n]: ");
                        scanf(" %c", &options[index]);
                        if (options[index] == 'y' || options[index] == 'n') {
                            flag = 1;
                            index++;
                            count++;
                            count1 = 0;
                        }
                        else {
                            printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
                        }
                    } while (flag == 0);
                }
                else {
                    printf("      ERROR: Value must be between 1 and 3\n");
                }
            } while (flag == 0);
        }
        else {
            printf("      ERROR: Cost must be at least $100.00\n");
            count1 = 1;
        }
    } while (count <= itemscount);
    printf("\n");
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    printf("%3d  %5d    %5c    %11.2lf\n", 1, priority[0], options[0], cost[0]);
    printf("%3d  %5d    %5c    %11.2lf\n", 2, priority[1], options[1], cost[1]);
    printf("%3d  %5d    %5c    %11.2lf\n", 3, priority[2], options[2], cost[2]);
    printf("%3d  %5d    %5c    %11.2lf\n", 4, priority[3], options[3], cost[3]);
    printf("%3d  %5d    %5c    %11.2lf\n", 5, priority[4], options[4], cost[4]);

    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n", cost[0] + cost[1] + cost[2] + cost[3] + cost[4]);

    do {
        printf("\nHow do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d", &selection);
        if (selection == 1 || selection == 2) {
            if (selection == 1) {
                printf("\n====================================================\n");
                printf("Filter:   All items\n");
                amount = cost[0] + cost[1] + cost[2] + cost[3] + cost[4];
                printf("Amount:   $%.2lf\n", amount);
                time = amount / netincome;
                years = time / 12;
                months = time % 12;
                amount = 0;
                printf("Forecast: %d years, %d months", years, months + 1);
                printf("\nNOTE: Financing options are available on some items.\n");
                printf("      You can likely reduce the estimated months.\n");
                printf("====================================================\n");
            }
            else {
                printf("\nWhat priority do you want to filter by? [1-3]: ");
                scanf("%d", &priorityfilter);
                if (priorityfilter == 1) {
                    printf("\n====================================================\n");
                    printf("Filter:   by priority (%d)\n", priorityfilter);
                    for (index = 0; index <= itemscount; index++) {
                        if (priority[index] == 1) {
                            amount += cost[index];
                        }
                    }

                    printf("Amount:   $%.2f\n", amount);
                    time = amount / netincome;
                    years = time / 12;
                    months = time % 12;
                    amount = 0;
                    printf("Forecast: %d years, %d months", years, months + 1);
                    printf("\nNOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                    printf("====================================================\n");

                }
                else if (priorityfilter == 2) {
                    printf("\n====================================================\n");
                    printf("Filter:   by priority (%d)\n", priorityfilter);
                    for (index = 0; index <= itemscount; index++) {
                        if (priority[index] == 2) {
                            amount += cost[index];

                        }
                    }
                    printf("Amount:   $%.2f\n", amount);
                    time = amount / netincome;
                    years = time / 12;
                    months = time % 12;
                    amount = 0;
                    printf("Forecast: %d years, %d months", years, months + 1);
                    printf("\n====================================================\n");
                }
                else if (priorityfilter == 3) {
                    printf("\n====================================================\n");
                    printf("Filter:   by priority (%d)\n", priorityfilter);
                    for (index = 0; index <= itemscount; index++) {
                        if (priority[index] == 3) {
                            amount += cost[index];

                        }
                    }
                    printf("Amount:   $%.2f\n", amount);
                    time = amount / netincome;
                    years = time / 12;
                    months = time % 12;
                    amount = 0;
                    printf("Forecast: %d years, %d months", years, months + 1);
                    printf("\nNOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                    printf("====================================================\n");
                }
            }
        }
        else if (selection != 0) {
            printf("\nERROR: Invalid menu selection.\n");
        }
    } while (selection != 0);

    printf("\nBest of luck in all your future endeavours!\n");
    return 0;

}
