/*
*****************************************************************************
                          Workshop - #3 (P2)
Full Name  :akash yadav
Student ID#:172566218
Email      :ayadav@myseneca.ca
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char type1, type2, type3, grindsize1, grindsize2, grindsize3, cream1, cream2, cream3, coffeestr, cream4, maker;
    int bagwt1, bagwt2, bagwt3, serving;
    double temp1, temp2, temp3;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type1);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindsize1);
    printf("Bag weight (g): ");
    scanf(" %d", &bagwt1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream1);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &temp1);
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type2);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindsize2);
    printf("Bag weight (g): ");
    scanf(" %d", &bagwt2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream2);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &temp2);
    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type3);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindsize3);
    printf("Bag weight (g): ");
    scanf("%d", &bagwt3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream3);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &temp3);
    printf("\n---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |    Packaged   |  Best |  Serving \n");
    printf("   |     Type      |  Grind Size   |   Bag Weight  | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |  (C)  |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |   %d   |   %d   |   %d    |   %d  | %4d | %6.3lf |   %d  | %5.1lf | %5.1lf\n", type1 == 'l', type1 == 'B', grindsize1 == 'c', grindsize1 == 'f', bagwt1, bagwt1 / GRAMS_IN_LBS, cream1 == 'y', temp1, (temp1 * 1.8) + 32.0);
    printf(" 2 |   %d   |   %d   |   %d    |   %d  | %4d | %6.3lf |   %d  | %5.1lf | %5.1lf\n", type2 == 'L', type2 == 'B', grindsize2 == 'C', grindsize2 == 'F', bagwt2, bagwt2 / GRAMS_IN_LBS, !cream2 == 'N', temp2, (temp2 * 1.8) + 32.0);
    printf(" 3 |   %d   |   %d   |   %d    |   %d  | %4d | %6.3lf |   %d  | %5.1lf | %5.1lf\n", type3 == 'L', type3 == 'B', grindsize3 == 'c', grindsize3 == 'f', bagwt3, bagwt3 / GRAMS_IN_LBS, !cream3 == 'n', temp3, (temp3 * 1.8) + 32.0);

    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffeestr);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream4);
    printf("Typical number of daily servings: ");
    scanf("%d", &serving);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |      Coffee        |  Packaged   | With  |   Serving     \n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature     \n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",( (coffeestr == 'm') && (type1 == 'l')), !(maker == 'c' )|| grindsize1 == 'c'), ((serving >= 1 && serving < 5) && (bagwt1 >= 0 || bagwt1 <= 250)), ((cream4 == 'y') && (cream1 == 'y')), ((maker == 'r') && (temp1 <= 70.0)));
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffeestr != 'm') && (type2 == 'B')), (maker == 'c' )|| grindsize2 == 'F', ((serving >= 5 && serving < 10) && (bagwt2 >= 250 || bagwt2 <= 500)), !((cream4 == 'y') && (cream2 == 'N')), ((maker == 'c') && (temp2 >= 70.0)));
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffeestr == 'm') && (type3 == 'L))', (maker == 'c' )|| grindsize3 == 'f', !((serving >= 10) && (bagwt3 >= 500) || (bagwt3 <= 1000)), !((cream4 == 'y') && (cream3 == 'n')), ((maker == 'c') && (temp3 >= 70.0)));

    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength([M]ild, [R]ich): ");
    scanf(" %c", &coffeestr);
    printf("Do you like your coffee with cream([Y]es, [N]o): ");
    scanf(" %c", &cream4);
    printf("Typical number of daily servings: ");
    scanf(" %d", &serving);
    printf("Maker([R]esidential, [C]ommercial): ");
    scanf(" %c", &maker);
    printf("\nThe below table shows how your preferences align to the available products :\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |      Coffee     |       Coffee       |   Packaged  | With  |   Serving\n");
    printf("ID|       Type      |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|        %d        |         %d          |      %d      |   %d   |      %d\n", coffeestr == 'm' && type1 == 'l', maker == 'R' && grindsize1 == 'c', ((serving >= 1 && serving < 5) && (bagwt1 >= 0 || bagwt1 <= 250)), ((cream4 != 'N') && (cream1 = 'y')), ((maker == 'R') && (temp1 <= 70.0)));
    printf(" 2|        %d        |         %d          |      %d      |   %d   |      %d\n", coffeestr == 'R' && type2 == 'B', maker == 'c' && grindsize2 == 'F', ((serving >= 5 && serving < 10) && (bagwt2 >= 250 || bagwt1 <= 250)), ((cream4 == 'N') && (cream2 = 'N')), ((maker != 'R') && (temp2 <= 70.0)));
    printf(" 3|        %d        |         %d          |      %d      |   %d   |      %d\n", coffeestr == 'm' && type3 == 'L', maker == 'c' && grindsize3 == 'f', ((serving >= 10) && (bagwt3 >= 0 || bagwt3 <= 1000)), ((cream4 == 'N') && (cream3 == 'n')), ((maker != 'R') && (temp3 >= 70.0)));
    printf("\nHope you found a product that suits your likes!\n");
    // Note: 
// You can convert Celsius to Fahrenheit given the following formula:
// fahrenheit = (celsius * 1.8) + 32.0);

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",

As described in step-10
=======================
printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",

*/