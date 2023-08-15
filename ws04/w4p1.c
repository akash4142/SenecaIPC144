/*
*****************************************************************************
                          Workshop - #4 (P1)
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

int looptimes, count = 0;
char looptype;
int main(void)
{

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");



    do {
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &looptype, &looptimes);

        if (looptype == 'Q' && looptimes == 0)
        {
            printf("\n+--------------------+\n");
            printf("Loop application ENDED\n");
            printf("+--------------------+\n");
        }
        else if (looptype == 'Q' && looptimes != 0)
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n");
        }
        else if (looptype == 'D' && (looptimes < 3 || looptimes > 20))
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
        }
        else if (looptype == 'W' && (looptimes < 3 || looptimes > 20))
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
        }
        else if (looptype == 'F' && (looptimes < 3 || looptimes > 20))
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
        }
        else if (looptype == 'D' && (looptimes >= 3 || looptimes <= 20))
        {
            printf("DO-WHILE: ");
            do {
                printf("D");
                looptimes--;
            } while (looptimes >= 1);
            printf("\n");
        }
        else if (looptype == 'W' && (looptimes >= 3 || looptimes <= 20))
        {
            printf("WHILE   : ");
            while (looptimes >= 1) {
                printf("W");
                looptimes--;
            }
            printf("\n");
        }
        else if (looptype == 'F' && (looptimes >= 3 || looptimes <= 20))
        {
            printf("FOR     : ");
            for (count = looptimes; count >= 1; count--) {
                printf("F");
            }
            printf("\n");
        }
        else if (looptype != 'Q' || looptype != 'D' || looptype != 'F' || looptype != 'W')
        {
            printf("ERROR: Invalid entered value(s)!\n");
        }
    } while (looptype != 'Q' || looptimes != 0);





    return 0;
}