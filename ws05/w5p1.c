/*
*****************************************************************************
                          Workshop - #5 (P1)
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#include <stdio.h>

int main(void)
{
    
    int year, months, flag = 0;
    printf("General Well-being Log\n");
    printf("======================\n");
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &months);
        if (year >= 2012 && year <= 2022) {
            if (months >= 1 && months <= 12) {
                printf("\n*** Log date set! ***\n\n");
                flag = 1;
            }
            else {
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
            }
        }
        else {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            if (months <= 0 || months >= 12) {
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
            }
        }
    } while (flag == 0);

    printf("Log starting date: %d-", year);

    switch (months) {
    case 1: {
        printf("JAN-");
        break;
    }
    case 2: {
        printf("FEB-");
        break;
    }
    case 3: {
        printf("MAR-");
        break;
    }
    case 4: {
        printf("APR-");
        break;
    }
    case 5: {
        printf("MAY-");
        break;
    }
    case 6: {
        printf("JUN-");
        break;
    }
    case 7: {
        printf("JUL-");
        break;
    }
    case 8: {
        printf("AUG-");
        break;
    }
    case 9: {
        printf("SEP-");
        break;
    }
    case 10: {
        printf("OCT-");
        break;
    }
    case 11: {
        printf("NOV-");
        break;
    }
    case 12: {
        printf("DEC-");
        break;
    }
    }
    printf("01\n");
    return 0;
}