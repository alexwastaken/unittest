#include <iostream>
#include <cmath>
using namespace std;

void multiFunc(int posInt);

int main() {

    int posInt = 0;

    cout<<"Please enter a positive integer: ";
    cin>>posInt;
    multiFunc(posInt);

}

void multiFunc (int posInt) {

        int newLine = 0;
        int currentNumber = 1;

        for (int i = 0; i < posInt; i++) {

            newLine++;

            if (newLine == sqrt(posInt)) {
                    cout << currentNumber << " ";
                    newLine = 0;
                    currentNumber++;
                    cout<<endl;
                } else {
                cout << currentNumber << " ";
                currentNumber++;
            }
        }

    }