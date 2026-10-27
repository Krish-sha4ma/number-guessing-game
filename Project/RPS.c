#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int choice;
    srand(time(NULL));
    int randomNum = (rand()%3)+1;

    printf("\n\n***************************************************************\n");
    printf("\t\tRock Paper Scissors Game !!\n");
    printf("***************************************************************\n\n");
    return 0;
}