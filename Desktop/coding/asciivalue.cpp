#include <iostream>
using namespace std;

int main() {
    char inputChar;
    int asciiValue;

    cout<<"Please enter a character:"<<endl;
    cin>>inputChar;
    
    asciiValue = (int)inputChar; //casting the char into a int data type does not lose any accuracy

    cout<<"The ASCII value of "<<inputChar<<" is "<<asciiValue<<endl;
    
    return 0;
}