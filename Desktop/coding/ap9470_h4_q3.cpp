#include <iostream>
using namespace std;

int main() {
    cout << "Enter decimal number: ";
    
    int decimal;
    cin >> decimal;

    cout << "The binary representation of " << decimal << " is ";

    if (decimal == 0) {
        cout << "0";
    } else {

        int remainder;
        int reversed_binary = 0;
        int factor = 1;

        while (decimal > 0) {
            remainder = decimal % 2;
            reversed_binary += remainder * factor;
            factor *= 10;
            decimal = decimal / 2;
        }

        cout << reversed_binary;
    }

    cout << endl;
    return 0;
}