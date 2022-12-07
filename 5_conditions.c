#include <stdio.h>

void guessNumber(int guess) {
  if (guess == 555) {
    printf("Correct. You guessed it!\n");
  } else if (guess < 555) {
    printf("You guess is to low.\n");
  } else if (guess > 555) {
    printf("You guess is to high.\n");
  }
}

int main() {
  guessNumber(500);
  guessNumber(600);
  guessNumber(555);
}
