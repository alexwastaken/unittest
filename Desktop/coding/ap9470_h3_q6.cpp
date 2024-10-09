#include <iostream>
#include <string>
using namespace std;

const double WEEKDAY_DAY_RATE = 0.40;
const double WEEKDAY_NIGHT_RATE = 0.25;
const double WEEKEND_RATE = 0.15;

int main() {

    string dayOfWeek;
    string time;
    int duration;
    double rate;

    cout << "Enter the day of the week (Mo Tu We Th Fr Sa Su): ";
    cin >> dayOfWeek;

    cout << "Enter the start time in 24 hour notation HH:MM: ";
    cin >> time;

    cout << "Enter the length of the call in minutes: ";
    cin >> duration;

    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));

    if (dayOfWeek == "Sa" || dayOfWeek == "Su") {
        rate = WEEKEND_RATE;
    } else {
        if (hour >= 8 && hour < 18) {
            rate = WEEKDAY_DAY_RATE;
        } else {
            rate = WEEKDAY_NIGHT_RATE;
        }
    }

    double cost = rate * duration;

    cout << "The cost of the call is $" << cost << endl;

    return 0;
}