#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    string solutions;

    cout << "Please enter value of a: ";
    cin >> a;

    cout << "Please enter value of b: ";
    cin >> b;

    cout << "Please enter value of c: ";
    cin >> c;

     

    if (a == 0 && b == 0 && c == 0) {
        solutions = "infinite";
        
    } else if (a == 0 && b == 0 && c > 0) {
        solutions = "No Solution";

    } else if (a > 0) {

        int posOrNeg = b * b - 4 * a * c;

        if (posOrNeg > 0) {

            float x1 = (-b + sqrt(posOrNeg)) / (2 * a);
            float x2 = (-b - sqrt(posOrNeg)) / (2 * a);
            cout << "There are two real solutions x1= " << x1 << " and x2=" << x2 << endl;

        } else if (posOrNeg == 0) {

            float x1 = -b / (2 * a);
            cout << "There is one real solution x1=" << x1 << endl;

        } else {
            cout << "There are no real solutions" << endl;
        }
    }

    return 0;


}