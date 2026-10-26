#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int guess;

    int num = (rand() % 100) + 1;
    printf("****************************************************************\n");
    printf("\t\tNumber Guessing Game!!\n");
    printf("****************************************************************\n\n");

    while (1)
    {
        printf("Write your guess!\n");
        scanf("%d", &guess);

        if (guess < num)
        {
            printf("!! TOO LOW !! \n");
        }

        else if (guess > num)
        {
            printf("!! TOO HIGH !!\n");
        }

        else if (guess == num)
        {
            printf("You Guessed Correctly!\n");
            break;
        }

        else
        {
            printf("!! INVALID INPUT !!\n");
        }
    }
    return 0;
}