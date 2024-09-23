#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;

int missles = 0;
string launchCode = "";

void countMinerals(){
    int count = 0;
    while (true) {
        cout << "missles: " << missles << "\r";
        cout.flush();
        missles++;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main(){
    thread processThis(countMinerals);

    cout<<"Welcome to space invaders\n";
    cout<<"an asteroid is headed your way. When you have 100 missles you can launch!\n";
    cout<<"type 'fire' to launch but only at 100 missles\n";
    
    while (true) {
        cin >> launchCode;

        if (launchCode == "fire" && missles >= 100) {
            cout << "You win! You fired 100 missles at the asteroid and blew it up!" << endl;
            break; // Exit the loop and end the program
        } else if (launchCode == "fire") {
            cout << "You don't have a big enough arsenal yet!" << endl;
        } else {
            cout << "Invalid command. Please type 'fire' to launch." << endl;
        }
    }

    return 0;
}