/*
*****************************************************************************
                          Workshop - #7 (P2)
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
        int max_path[MIN_RANGE];
    }player;
    struct GameInfo {
        int num_move;
        int path_length;
        int bombs;
        int treasure;
    }Game;
    int count = 0, count1 = 0, flag = 0, count2 = 0, option = 1, arr_symbol[MAX_RANGE], value_at_bomb, value_at_treasure, max_moves, user_move = 0, bomb_positions[MAX_RANGE], treasure_positions[MAX_RANGE], i, j;
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
    for (i = 1; i <= Game.path_length; i++) {
        arr_symbol[i] = '-';
    }
    Game.treasure = 0;

    do {
        if (user_move == 0) {
            printf("\n");
        }
        else {
            printf("  ");
            for (i = 1; i <= user_move; i++) {
                if (user_move == i) {
                    printf("%c\n", 'V');
                }
                else
                    printf(" ");
            }
        }
        printf("  ");
        for (i = 1; i <= Game.path_length; i++) {
            printf("%c", arr_symbol[i]);
        }

        printf("\n  ");
        for (i = 1; i <= Game.path_length; i++) {
            if (i % 10 != 0) {
                printf("|");
            }
            else {
                printf("%d", i / 10);
            }
        }
        printf("\n  ");
        for (i = 1; i <= Game.path_length; i++) {
            printf("%d", i % 10);
        }
        printf("\n+---------------------------------------------------+\n");
       
        if (Game.num_move > 9) {
            printf("  Lives:  %d  | Treasures:  %d  |  Moves Remaining: %d\n", player.num_lives, Game.treasure, Game.num_move);
        }
        else {
            printf("  Lives:  %d  | Treasures:  %d  |  Moves Remaining:  %d\n", player.num_lives, Game.treasure, Game.num_move);
        }

        
        printf("+---------------------------------------------------+\n");
        if (player.num_lives > 0 && Game.num_move > 0) {
            for (i = 0; i == 0;) {
                printf("Next Move [%d-%d]: ", MIN_LIVES, Game.path_length);
                scanf("%d", &user_move);

                if (user_move >= MIN_LIVES && user_move <= Game.path_length) {
                    player.max_path[count2] = user_move;
                    for (j = 0; j < count2 || flag == 1; j++) {
                        if (user_move == player.max_path[j]) {
                            option = 0;
                            flag = 1;

                        }
                        else {
                            flag = 0;
                        }
                    }

                    if (option == 1) {
                        value_at_bomb = bomb_positions[user_move - 1];
                        value_at_treasure = treasure_positions[user_move - 1];
                        if (value_at_treasure == 1 && value_at_bomb == 1) {
                            printf("\n===============> [&] !!! BOOOOOM !!! [&]\n");
                            printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");
                            player.num_lives -= 1;
                            Game.treasure += 1;
                            Game.num_move -= 1;
                            arr_symbol[user_move] = '&';
                            i = 1;
                            count2++;

                        }
                        else if (value_at_bomb == 1 && value_at_treasure == 0) {
                            printf("\n===============> [!] !!! BOOOOOM !!! [!]\n\n");
                            player.num_lives -= 1;
                            Game.num_move -= 1;
                            i = 1;
                            arr_symbol[user_move] = '!';
                            count2++;

                        }
                        else if (value_at_treasure == 1 && value_at_bomb == 0) {
                            printf("\n===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
                            Game.treasure += 1;
                            Game.num_move -= 1;
                            i = 1;

                            arr_symbol[user_move] = '$';
                            count2++;
                        }
                        else {
                            printf("\n===============> [.] ...Nothing found here... [.]\n\n");
                            Game.num_move -= 1;
                            i = 1;

                            arr_symbol[user_move] = '.';
                            count2++;
                        }
                        if (player.num_lives == 0) {
                            printf("No more LIVES remaining!\n\n");
                        }
                    }
                    else {
                        printf("\n===============> Dope! You've been here before!\n\n");
                        i = 1;
                        option = 1;
                    }
                }
                else {
                    printf("  Out of Range!!!\n");
                }
            }
        }
        else {

            count1 = 1;
        }
    } while (count1 == 0);
    printf("\n##################\n");
    printf("#   Game over!   #\n");
    printf("##################\n\n");
    printf("You should play again and try to beat your score!\n");
    return 0;

}
