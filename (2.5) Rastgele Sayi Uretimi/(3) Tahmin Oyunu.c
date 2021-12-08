#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {

	srand((unsigned int)time(0));
	int number = rand() % 50;
	int guess;
	int finishing = 1;
	int testing_number = 0;

	printf("WELCOME TO GUEES GAME BETWEEN 0 - 49 \n");

	while (finishing) {

		printf("Enter your guess : ");
		scanf("%d", &guess);
		testing_number++;

		if (guess == number) {
			printf("Congrulations Your Guess is Correct! in %d. testing...", testing_number);
			finishing--;
		}

		else if (guess < number) {
			printf("Your guess is lower than number try again...\n");
			finishing = 1;
		}

		else if (guess > number) {
			printf("Your guess is higher than number try again...\n");
			finishing = 1;
		}
	}
}

