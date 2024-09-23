#include <iostream>
using namespace std;

const int QUARTERS = 25;
const int DIMES = 10;
const int NICKLES = 5;
const int PENNIES = 1;

int main() {

    int amountOfDollars, amountOfCents;

    cout << "Please enter your amount in the format of dollars and cents separated by a space\n";

    cin >> amountOfDollars >> amountOfCents;

    cout << amountOfDollars << " dollars and " << amountOfCents << " cents are:\n";


    int totalCents = ((amountOfDollars * 100) + amountOfCents);

    int totalQuarters = totalCents / QUARTERS;

    int totalLeft = totalCents - (totalQuarters * QUARTERS);

    int totalDimes = totalLeft / DIMES;

    totalLeft = totalLeft - (totalDimes * DIMES);

    int totalNickles = totalLeft / NICKLES;

    totalLeft = totalLeft - (totalNickles * NICKLES);

    int totalPennies = totalLeft / PENNIES;


    cout << totalQuarters << " quarters " << totalDimes << " dimes " << totalNickles << " nickles " << totalPennies << " and pennies";

}


