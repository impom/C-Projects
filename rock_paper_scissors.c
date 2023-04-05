//Rock paper scissors game , made by Rupam
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer, result;
    srand(time(NULL));

    printf("[+]Rock, Paper, Scissors game!\n");
    printf("Choose:\n[+] 1 for Rock\n[+] 2 for Paper\n[+] 3 for Scissors\n \n");
    scanf("%d", &player);

    // Generate random number for computer's choice
    computer = rand() % 3 + 1;

    printf("You chose ");
    switch(player) {
        case 1: printf("Rock.\n"); break;
        case 2: printf("Paper.\n"); break;
        case 3: printf("Scissors.\n"); break;
        default: printf("invalid choice.\n"); return 1;
    }

    printf("Computer chose ");
    switch(computer) {
        case 1: printf("Rock.\n"); break;
        case 2: printf("Paper.\n"); break;
        case 3: printf("Scissors.\n"); break;
    }

    // Calculate the result
    if(player == computer) {
        printf("It's a tie!\n");
    }
    else if((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)) {
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }

    return 0;
}
