#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d\n",number);
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf(" lower number \n");
        }
        else if (guess < number)
        {
            printf(" higher number plss\n");
        }
        else
        {
            printf("You gussed it in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    // printf("The number is %d\n", number);
    return 0;
}
