#include <iostream>
using namespace std;

int main() {

    cout<<"Input the number of lines: "<<endl;
    int lines;
    int astrix;
    cin>>lines;


    for (int i = 0; i < lines; i++) {

        for (int z = 0; z < i; z++) {
            cout<<" ";
        }

        for (int y = 0; y < 2 * (lines - i) - 1; y++) {
            cout<<"*";
        }
        cout<<endl;
    }


    for (int i = 1; i <= lines; i++) {

        for (int z = 0; z < lines - i; z++) {
            cout << " ";
        }

        for (int y = 0; y < 2 * i - 1; y++) {
            cout << "*";
        }

        cout << endl;
    }


}