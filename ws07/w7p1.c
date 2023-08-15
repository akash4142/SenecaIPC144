/*
*****************************************************************************
                          Workshop - #7 (P1)
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
#define MAX_LIVES  10
#define MIN_LIVES  1
#define MULTIPLE  5
#define MIN_RANGE  10
#define MAX_RANGE  70

#include <stdio.h>

int main(void)
{
    struct playerinfo {
        int num_lives;
        char symbol;
        int counter;
        int num_treasure;
        int max_path;
    }player;
    struct GameInfo {
        int num_move;
        int path_length;
        int bombs;
        int treasure;
    }Game;
    int count = 0, max_moves, bomb_positions[35], treasure_positions[35], i, j;
    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n\n");

    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.symbol);
    do {
        printf("Set the number of lives: ");
        scanf("%d", &player.num_lives);
        if (player.num_lives > MIN_LIVES && player.num_lives < MAX_LIVES) {
            printf("Player configuration set-up is complete\n\n");
            printf("GAME Configuration\n");
            printf("------------------\n");
            for (count = 0; count == 0;) {
                printf("Set the path length (a multiple of 5 between 10-70): ");
                scanf("%d", &Game.path_length);
                if (Game.path_length % MULTIPLE == 0 && (Game.path_length > MIN_RANGE && Game.path_length < MAX_RANGE)) {
                    max_moves = 0.75 * Game.path_length;
                    max_moves = (int)max_moves;
                    for (count = 0; count == 0;) {
                        printf("Set the limit for number of moves allowed: ");
                        scanf("%d", &Game.num_move);
                        if (Game.num_move > player.num_lives && Game.num_move < max_moves) {
                            count++;
                        }
                        else {
                            printf("    Value must be between %d and %d\n", player.num_lives, max_moves);
                        }
                    }
                }
                else {
                    printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MIN_RANGE, MAX_RANGE);
                }
            }
        }
        else {
            printf("     Must be between %d and %d!\n", MIN_LIVES, MAX_LIVES);
        }
    } while (count == 0);
    printf("\nBOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of %d where a value\n", MULTIPLE);
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", Game.path_length);

    for (i = 0; i < Game.path_length; i += MULTIPLE) {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        for (j = 0; j < MULTIPLE; j++) {
            scanf("%d", &bomb_positions[i + j]);
        }
    }
    printf("BOMB placement set\n\n");
    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of %d where a value\n", MULTIPLE);
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", Game.path_length);

    for (i = 0; i < Game.path_length; i += MULTIPLE) {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        for (j = 0; j < MULTIPLE; j++) {
            scanf("%d", &treasure_positions[i + j]);
        }
    }
    printf("TREASURE placement set\n\n");
    printf("GAME configuration set-up is complete...\n\n");
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");

    printf("Player:\n");
    printf("   Symbol     : %c\n", player.symbol);
    printf("   Lives      : %d\n", player.num_lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n\n");
    printf("Game:\n");
    printf("   Path Length: %d\n", Game.path_length);
    printf("   Bombs      : ");
    for (i = 0; i < Game.path_length; i++) {
        printf("%d", bomb_positions[i]);
    }
    printf("\n   Treasure   : ");
    for (i = 0; i < Game.path_length; i++) {
        printf("%d", treasure_positions[i]);
    }
    printf("\n\n====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");
    return 0;
}
