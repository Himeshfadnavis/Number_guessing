#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random, guess;
    int num_of_guess = 0;
    srand(time(0));
    random = (rand() % 100) + 1; // generating number between 0 to 100
    do
    {
        printf("enter your guess between 0 to 100\n");
        scanf("%d", &guess);

        if (guess > random)
        {
            printf("You guessed the larger number ,please enter the smaller number\n");
        }
        else if (guess < random)
        {
            printf("you guessed the smaller number,please enter the smaller number\n");
        }
        else
        {
            printf("you have guessed the correct number,CONGRATULATIONS!!\n");
        }
        num_of_guess++;
    } while (guess != random);
    printf("you have guessed the number in %d guesses\n", num_of_guess);
    return 0;
}