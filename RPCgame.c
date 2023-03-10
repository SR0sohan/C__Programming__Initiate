#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generatRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    // returns 1 if c1>c2 and 0 otherwise, if c1==c2 it wil return -1
    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the rock,paper,Scissor game.Choose\n");
    for (int i = 0; i < 3; i++)
    {
        /* take player 1's input */
        printf("player 1's turn:\n");
        printf("CHoose 1 for Rock,2 for Paper,3 for Scissor.\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n", playerChar);

        /* generate computer's input */
        printf("Computer's turn:\n");
        printf("CHoose 1 for Rock,2 for Paper,3 for Scissor.\n");
        temp = generatRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU chose %c\n", compChar);

        // !compare the scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("Cpu got the point, better luck next time!\n");
        }
        else if (greater(compChar, playerChar))
        {
            compScore += 1;
            playerScore += 1;
            printf("It's a draw, better luck next time!\n");

        }
        else
        {
            playerScore += 1;
            printf("Congratulation! You got the point.\n");

        }
        printf("You: %d\n,CPU: %d\n\n", playerScore,compScore);
    }

    if (playerScore > compScore)
    {
        printf("You win the game.\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the game.\n");
    }
    else
    {
        printf("It's a draw!\n");
    }

    return 0;
}