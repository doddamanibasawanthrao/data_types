#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char *items[] = {"Rock", "Paper", "Scissors"};
    char user[20];
    int computer;

    printf("Enter Rock, Paper or Scissors: ");
    scanf("%19s", user);

    srand(time(NULL));
    computer = rand() % 3;

    printf("You chose: %s\n", user);
    printf("Computer chose: %s\n", items[computer]);

    if (strcmp(user, items[computer]) == 0) {
        printf("Result: Draw\n");
    } 
    else if ((strcmp(user, "Rock") == 0 && strcmp(items[computer], "Scissors") == 0) ||
             (strcmp(user, "Paper") == 0 && strcmp(items[computer], "Rock") == 0) ||
             (strcmp(user, "Scissors") == 0 && strcmp(items[computer], "Paper") == 0)) {
        printf("Result: You Win!\n");
    } 
    else {
        printf("Result: Computer Wins!\n");
    }

    return 0;
}
