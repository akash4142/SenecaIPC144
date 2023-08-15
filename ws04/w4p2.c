/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  :Akash yadav
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

int main(void)
{
    int  numapples, numoranges, numpears, numtomatoes, numcabbages, shopagain;
    int pickapples, pickoranges, pickpears, picktomatoes, pickcabbages;
    printf("Grocery Shopping\n");
    printf("================\n");

    do
    {
        printf("How many APPLES do you need? : ");
        scanf("%d", &numapples);
        if (numapples < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
        }
        if (numapples >= 0)
        {
            printf("\n");
        }
    } while (numapples < 0);

    do
    {
        printf("How many ORANGES do you need? : ");
        scanf("%d", &numoranges);
        if (numoranges < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
        }
        if (numoranges >= 0)
        {
            printf("\n");
        }
    } while (numoranges < 0);

    do
    {
        printf("How many PEARS do you need? : ");
        scanf("%d", &numpears);
        if (numpears < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
        }
        if (numpears >= 0)
        {
            printf("\n");
        }
    } while (numpears < 0);

    do
    {
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &numtomatoes);
        if (numtomatoes < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
        }
        if (numtomatoes >= 0)
        {
            printf("\n");
        }
    } while (numtomatoes < 0);

    do
    {
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &numcabbages);
        if (numcabbages < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
        }
        if (numcabbages >= 0)
        {
            printf("\n");
        }
    } while (numcabbages < 0);

    printf("--------------------------\n");
    printf("Time to pick the products!\n");
    printf("--------------------------\n\n");


    do {
        printf("Pick some APPLES... how many did you pick? : ");
        scanf("%d", &pickapples);
        if (pickapples > numapples)
        {

            printf("You picked too many... only %d more APPLE(S) are needed.\n", numapples);
        }
        else if (pickapples <= 0)
        {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if (pickapples > 0)
        {
            numapples -= pickapples;
            if (numapples == 0)
            {
                printf("Great, that's the apples done!\n\n");
            }
            else
            {
                printf("Looks like we still need some APPLES...\n");
            }
        }
    } while (numapples > 0);

    do {
        printf("Pick some PEARS... how many did you pick? : ");
        scanf("%d", &pickpears);
        if (pickpears > numpears)
        {

            printf("You picked too many... only %d more PEAR(S) are needed.\n", numpears);
        }
        else if (pickpears <= 0)
        {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if (pickpears > 0)
        {
            numpears -= pickpears;
            if (numpears == 0)
            {
                printf("Great, that's the pears done!\n\n");
            }
            else
            {
                printf("Looks like we still need some PEARS...\n");
            }
        }
    } while (numpears > 0);


    do {
        printf("Pick some CABBAGES... how many did you pick? : ");
        scanf("%d", &pickcabbages);
        if (pickcabbages > numcabbages)
        {

            printf("You picked too many... only %d more CABBAGE(S) are needed.\n", numcabbages);
        }
        else if (pickcabbages <= 0)
        {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if (pickcabbages > 0)
        {
            numcabbages -= pickcabbages;
            if (numcabbages == 0)
            {
                printf("Great, that's the cabbages done!\n\n");
            }
            else
            {
                printf("Looks like we still need some CABBAGES...\n");
            }
        }
    } while (numcabbages > 0);

    printf("All the items are picked!\n\n");
    printf("Do another shopping? (0=NO): ");
    scanf("%d", &shopagain);
    do {
        printf("\nGrocery Shopping\n");
        printf("================\n");
        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d", &numapples);
            if (numapples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (numapples < 0);

        do
        {
            printf("\nHow many ORANGES do you need? : ");
            scanf("%d", &numoranges);
            if (numoranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (numoranges < 0);

        do
        {
            printf("\nHow many PEARS do you need? : ");
            scanf("%d", &numpears);
            if (numpears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (numpears < 0);

        do
        {
            printf("\nHow many TOMATOES do you need? : ");
            scanf("%d", &numtomatoes);
            if (numtomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (numtomatoes < 0);

        do
        {
            printf("\nHow many CABBAGES do you need? : ");
            scanf("%d", &numcabbages);
            if (numcabbages < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (numcabbages < 0);


        printf("\n--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        do {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &pickoranges);
            if (pickoranges > numoranges)
            {

                printf("You picked too many... only %d more ORANGE(S) are needed.\n", numoranges);
            }
            else if (pickoranges <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (pickoranges > 0)
            {
                numoranges -= pickoranges;
                if (numoranges == 0)
                {
                    printf("Great, that's the oranges done!\n\n");
                }
                else
                {
                    printf("Looks like we still need some ORANGES...\n");
                }
            }
        } while (numoranges > 0);

        do {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &picktomatoes);
            if (picktomatoes > numtomatoes)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", numtomatoes);
            }
            else if (picktomatoes <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (picktomatoes > 0)
            {
                numtomatoes -= picktomatoes;
                if (numtomatoes == 0)
                {
                    printf("Great, that's the tomatoes done!\n\n");
                }
                else
                {
                    printf("Looks like we still need some TOMATOES...\n");
                }
            }
        } while (numtomatoes > 0);

        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &shopagain);
        printf("\nYour tasks are done for today - enjoy your free time!\n");
    } while (shopagain > 0);
    return 0;
}