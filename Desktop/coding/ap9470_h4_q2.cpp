#include <iostream>
using namespace std;
#include <string>

int main(){

    int I = 1;
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;

    int mMod;
    int dMod;
    int cMod;
    int lMod;
    int xMod;
    int vMod;
    int iMod;
    

    string answer = "";
    int decimal;

    cout<<"Enter a decimal number"<<endl;

    cin>>decimal;

    int mDivision = decimal / M;
    mMod = decimal % M;

    int dDivision = mMod / D;
    dMod = mMod % D;

    int cDivision = dMod / C;
    cMod = dMod % C;

    int lDivision = cMod / L;
    lMod = cMod % L;

    int xDivision = lMod / X;
    xMod = lMod % X;

    int vDivision = xMod / V;
    vMod = xMod % V;

    int iDivision = vMod / I;
    iMod = vMod % I;

    for (int i = 0; i < mDivision; i++) {
        answer += "M";
    }

    for (int i = 0; i < dDivision; i++) {
        answer += "D";
    }

    for (int i = 0; i < cDivision; i++) {
        answer += "C";
    }

    for (int i = 0; i < lDivision; i++) {
        answer += "L";
    }

    for (int i = 0; i < xDivision; i++) {
        answer += "X";
    }

    for (int i = 0; i < vDivision; i++) {
        answer += "V";
    }

    for (int i = 0; i < iDivision; i++) {
        answer += "I";
    }

    cout<<decimal<<" is "<<answer<<endl;
}