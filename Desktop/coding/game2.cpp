#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <atomic>
using namespace std;

class newCharacter {
  public:
    int myNum;
    //fighters 0,
    int inventory[6] = {0,0,0,0,0,0};

    void addFighter() {
        inventory[0]++;
    }
};

class Minerals: public newCharacter {
    public:
        atomic<int> iron = 0;
        atomic<int> platinum = 0;

        void produceIron() {
            while (true) {
                iron++;
                this_thread::sleep_for(chrono::seconds(1));
            }
        };

        void producePlatinum() {
            while (true) {
                platinum++;
                this_thread::sleep_for(chrono::seconds(2));
            }
        };


        void report() {
            cout << "       Your status report:" << endl;
            cout << "---------------------------------" << endl;
            cout << "Iron: " << iron << endl;
            cout << "Platinum " << platinum << endl;
            cout << "Total Fighters " << inventory[0] << endl; 
        }

};

int main() {
    
    Minerals minerals;

    thread ironThread(&Minerals::produceIron, &minerals);
    thread platThread(&Minerals::producePlatinum, &minerals);


    string input;

    cout << "Enter commands (type 'exit' to quit):" << endl;
    
    while (true) {

        cout << "> ";
        getline(cin, input);

        if (input == "exit") {
            break;
        } else if (input == "status") {
            minerals.report();
        } else if (input == "buy fighter") {

            if (minerals.iron > 20 && minerals.platinum > 10) {
                minerals.iron = 0;
                minerals.platinum = 0;
                minerals.addFighter();
                cout << "You purchased a fighter!" << endl;
            } else {
                cout << "You don't have enough minerals" << endl;
            }
        } 
        
        
        else {
            cout << "You entered: " << input << endl;
        }
    }


}