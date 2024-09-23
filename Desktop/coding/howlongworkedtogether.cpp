#include <iostream>
using namespace std;


int main() {

    int daysJohnWorked = 0;
    int hoursJohnWorked = 0;
    int minutesJohnWorked = 0;

    int daysBillWorked = 0;
    int hoursBillWorked = 0;
    int minutesBillWorked = 0;

    cout << "Please enter the number of days John has worked: ";
    cin >> daysJohnWorked;

    cout << "Please enter the number of hours John has worked: ";
    cin >> hoursJohnWorked;
    
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutesJohnWorked;

    cout << "Please enter the number of days Bill has worked: ";
    cin >> daysBillWorked;

    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hoursBillWorked;

    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutesBillWorked;

    int totalMinutes = ((daysJohnWorked + daysBillWorked) * 1440) + ((hoursJohnWorked + hoursBillWorked) * 60) + (minutesJohnWorked + minutesBillWorked);

    int totalDays = totalMinutes / 1440;

    int totalLeft = totalMinutes % 1440;

    int totalHours = totalLeft / 60;

    totalLeft = totalLeft % 60;

    int leftRemainingMinutes = totalLeft;

    cout << "The total time both of them worked together is: " << totalDays << " days " << totalHours << " hours " << leftRemainingMinutes << " minutes";

    return 0;

}