#include <iostream>
#include <math.h>
using namespace std;

int main(){

    cout<<"section a"<<endl;

    float sequenceLength;
    float a, b, c;

    cout<<"Please enter the length of your sequence: "<<endl;
    cin>>sequenceLength;

    cout<<"Please enter your sequence: "<<endl;
    cin>>a >> b >> c;

    double geometricMean = pow((a * b * c), 1.0 / sequenceLength);

    cout<<geometricMean;


    cout<<"section b"<<endl;

    float d = 1;
    int f = 1;
    int e = 0;

    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;

    while (true) {

        cin>>f;

        if (f == -1) {
            break;
        } else {
            d *= f;
            cout<<d<<" "<<endl;
            e++;
        }
    }

    cout<<e<<" "<<d<<endl;

    double geometricMean2 = pow(d, 1.0 / e);

    cout<<geometricMean2;
}