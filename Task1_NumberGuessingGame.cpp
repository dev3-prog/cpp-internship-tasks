#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    cout << "Guess the number between 1 and 100" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number)
            cout << "Too high! Try again." << endl;
        else if (guess < number)
            cout << "Too low! Try again." << endl;
        else {
            cout << "Correct! You guessed the number." << endl;
            break;
        }
    }

    return 0;
}