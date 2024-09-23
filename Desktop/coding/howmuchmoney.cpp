#include <iostream>
using namespace std;

const int QUARTERS = 25;
const int DIMES = 10;
const int NICKLES = 5;
const int PENNIES = 1;

int main() {

    int numberOfQuarters = 0;
    int numberOfDimes = 0;
    int numberOfNickles = 0;
    int numberOfPennies = 0;

    cout << "Please enter number of coins:\n";

    cout << "# of quarters:";
    cin >> numberOfQuarters;

    cout << "# of dimes:";
    cin >> numberOfDimes;
    
    cout << "# of nickles:";
    cin >> numberOfNickles;
    
    cout << "# of pennies:";
    cin >> numberOfPennies;

    int total = (numberOfQuarters * QUARTERS) + (numberOfDimes * DIMES) + (numberOfNickles * NICKLES) + (numberOfPennies * PENNIES);

    int cents = total % 100;

    int dollars = total / 100;

    cout << "The total is " << dollars << " dollars " << "and " << cents << " cents"; 

}


