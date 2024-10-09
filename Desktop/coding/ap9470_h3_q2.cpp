#include <iostream>
using namespace std;

int main (){

    string name;
    string status;
    int graduationYear;
    int currentYear;
    int yearNumber;

    cout << "Please enter your name: ";
    cin >> name;
    
    cout << "Please enter your graduation year: ";
    cin >> graduationYear;

    cout << "Please enter current year: ";
    cin >> currentYear;

    yearNumber = graduationYear - currentYear;

    if (yearNumber == 0) {
        status = "Graduated";
    } else if (yearNumber == 1) {
        status = "Senior";
    } else if (yearNumber == 2) {
        status = "Junior";
    } else if (yearNumber == 3) {
        status = "Sohpmore";
    } else if (yearNumber == 4) {
        status = "Freshman";
    } else {
        return 0;
    }

    cout << name << ", you are a " << status << endl;

}