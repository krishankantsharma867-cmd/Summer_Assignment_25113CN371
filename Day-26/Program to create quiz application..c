#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Quiz\n");

    printf("Q1. 2 + 2 = ?\n");
    printf("1. 3\n2. 4\n3. 5\n");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("Q2. C is a ______ ?\n");
    printf("1. Language\n2. Game\n3. Browser\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("Q3. India is in?\n");
    printf("1. Europe\n2. Asia\n3. Africa\n");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("Your Score = %d", score);

    return 0;
}