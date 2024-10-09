#include <iostream>
using namespace std;

const double ONE_KILO = .453592;
const double ONE_METER = .0254;

int main () {

    int weightInPounds;
    int heightInInches;
    string WeightStatus;

    cout << "Please enter your weight (in pounds): " << endl;
    cin >> weightInPounds;

    cout << "Please enter height (in inches): " << endl;
    cin >> heightInInches;

    double conversionToKilo = weightInPounds * ONE_KILO;
    double conversionToMeters = heightInInches * ONE_METER;

    if ((conversionToKilo) / (conversionToMeters * conversionToMeters) < 18.5) {
        WeightStatus = "Underweight";
    } else if ((conversionToKilo) / (conversionToMeters * conversionToMeters) > 18.5 &&
    (conversionToKilo) / (conversionToMeters * conversionToMeters) <= 25) {
        WeightStatus = "Normal";
    } else if ((conversionToKilo) / (conversionToMeters * conversionToMeters) > 25 &&
    (conversionToKilo) / (conversionToMeters * conversionToMeters) < 30) {
        WeightStatus = "Overweight";
    } else if ((conversionToKilo) / (conversionToMeters * conversionToMeters) >= 30) {
        WeightStatus = "Obese";
    }
    cout << "The weight status is: " << WeightStatus << endl;


}