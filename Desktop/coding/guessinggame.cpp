#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int checkGuess(int guess, int randomNumber, int guesses, int &rangeX, int &rangeY);

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int guesses = 5;
    int guess = 0;
    int rangeX = 1;
    int rangeY = 100;
    
    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    
    for (int i = 0; i < 5; i++) {
        guesses--;
        cout << "Range: [" << rangeX << ", " << rangeY << "], Number of guesses left: " << guesses + 1 << endl;
        cout << "Your guess: ";
        cin >> guess;
        
        if (checkGuess(guess, randomNumber, guesses, rangeX, rangeY)) {
            return 0;
        }
    }
    
    cout << "Out of guesses! My number is " << randomNumber << endl;
    return 0;
}

int checkGuess (int x, int y, int z, int &a, int &b) {
    string direction = "";

    if (x > y) {
        direction = "smaller.";
        if (b > x) {
            b = x - 1;
        }
    } else if (x < y) {
        direction = "bigger.";
        if (a < x) {
            a = x + 1;
        }
    }

    if (x == y) {
        cout << "Congrats! You guessed my number in " << 5 - z << " guesses." << endl;
        return 1;
    } else {
        cout << "Wrong! My number is " << direction << endl;
    }

    return 0;
}
