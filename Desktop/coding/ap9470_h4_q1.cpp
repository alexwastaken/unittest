#include <iostream>
using namespace std;

int main() {

    cout << "section a" << endl;
    int positiveInt;
    int result = 0;

    cout << "Please enter a positive integer: " << endl;
    cin >> positiveInt;

    while (positiveInt > 0) {
        result += 2;
        positiveInt -= 1;
        cout << result << endl;
    }


    cout << "section b" << endl;
    int positiveInt2;
    result = 0;

    cout << "Please enter a positive integer: " << endl;
    cin >> positiveInt2;

    for (; positiveInt2 > 0; positiveInt2--) {
        result += 2;
        cout << result << endl;
    }

    return 0;
}