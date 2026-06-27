#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess;

    srand(time(0));
    num = rand() % 10 + 1;

    printf("Guess a number between 1 and 10\n");

    while (guess != num) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == num)
            printf("Correct! You guessed the number.\n");
        else
            printf("Wrong! Try again.\n");
    }

    return 0;
}