#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main () {

    double number;
    int roundingMethod;

    cout << "Please enter a Real number:";
    cin >> number;

    cout << "Chose your rounding method:" << endl;
    cout << "1. Flooring round" << endl;
    cout << "2. Celing round" << endl;
    cout << "3. Round to the nearest whole number" << endl;

    cin >> roundingMethod;


    switch (roundingMethod) {

        case FLOOR_ROUND:

            if (number >= 0) {
                number = int(number);
            } else {
                if (number != int(number)) {
                    number = int(number) - 1;
                } else {
                    number = int(number);
                }
            }
            break;

        case CEILING_ROUND:

            if (number >= 0) {
                if (number != int(number)) {
                    number = int(number) + 1;
                } else {
                    number = int(number);
                }
            } else {
                number = int(number);
            }
            break;

        case ROUND:

            if (number >= 0) {
                if (number - int(number) >= 0.5) {
                    number = int(number) + 1;
                } else {
                    number = int(number);
                }
            } else {
                if (number - int(number) <= -0.5) {
                    number = int(number) - 1;
                } else {
                    number = int(number);
                }
            }
            break;



        default:
        
            return 1;


    }

    cout << number;

    return 0;
}