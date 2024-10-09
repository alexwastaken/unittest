#include <iostream>
#include <string>
using namespace std;

const char astrix = '*';
const string space = " ";

int main (){

    int input = 0;
    cin >> input;

    cout << astrix << endl;
    for (int i = 0; i < input; i++) {
        cout << "*";
        for(int j = 0; j < input; j++) {
            if (i == input - 1) {
                cout << astrix;
            } else if (i == j){
                cout << astrix;
            } else {
                cout << space;
            };
        }
        cout << endl;
    }



    return 0;
}