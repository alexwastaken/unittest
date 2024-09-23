#include <iostream>
using namespace std;

int main() {
    
    cout << "Please enter two positive integers, separated by a space:";

    int firstInteger, secondInteger;

    cin >> firstInteger >> secondInteger;

    if (firstInteger <= 0 || secondInteger <= 0) {
        cout << "Error: Both numbers must be positive integers." << endl;
        return 1;  // Exit the program
    }


    if (secondInteger == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }

    int additionAnswer = firstInteger + secondInteger;
    int subtractionAnswer = firstInteger - secondInteger;
    int multiplicationAnswer = firstInteger * secondInteger;
    float floatdivisionAnswer = float(firstInteger) / secondInteger;
    int divisionAnswer = firstInteger / secondInteger;
    int modAnswer = firstInteger % secondInteger;

    cout << firstInteger << " + " << secondInteger << " = " << additionAnswer << endl;
    cout << firstInteger << " - " << secondInteger << " = " << subtractionAnswer << endl;
    cout << firstInteger << " * " << secondInteger << " = " << multiplicationAnswer << endl;
    cout << firstInteger << " / " << secondInteger << " = " << floatdivisionAnswer << endl;
    cout << firstInteger << " div " << secondInteger << " = " << divisionAnswer << endl;
    cout << firstInteger << " mod " << secondInteger << " = " << modAnswer << endl;

}