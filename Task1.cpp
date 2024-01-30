//Task 1
#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Try to guess the number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Increment the number of attempts
        attempts++;

        // Provide feedback on the guess
        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
 