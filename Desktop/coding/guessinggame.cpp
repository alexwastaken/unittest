#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int checkGuess(int guess, int randomNumber, int guesses);

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int guesses = 0;
    int guess = 0;
    
    cout << "I thought of a number between 1 and 100! Try to guess it" << endl;
    cout << "Range: [1, 100], Number of guesses left: 5" << endl;
    
    for (int i = 0; i < 5; i++) {
        guesses++;
        cin>>guess;
        if (checkGuess(guess, randomNumber, guesses)){
            return 0;
        }
    }
    cout << "Out of guesses! My number is " << randomNumber << endl;
}

int checkGuess (int x, int y, int z) {
    
    cout << "Your guess: " << x << endl;
    string direction = "";

    if (x > y) {
        direction = "smaller.";
    } else {
        direction = "bigger.";
    }
    cout << "this is x " << x << "this is y " << y << endl;
    if (x == y) {
        cout << "Congrats! You guessed my number in " << z << " guesses." << endl;
        return 1;
    }
    else {
        cout << "Wrong my number is " << direction << endl;
    }
    return 0;
}