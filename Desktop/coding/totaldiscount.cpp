#include <iostream>
using namespace std;


int main() {

    float firstItem = 0;
    float secondItem = 0;
    float basePrice = 0;
    float halfPrice = 0;
    float discountPrice = 0;
    float totalPrice = 0;
    float taxRate = 0;
    string clubCard = "";

    cout << "Enter price of first item: " << endl;
    cin >> firstItem;

    cout << "Enter price of second item: " << endl;
    cin >> secondItem;

    cout << "Does customer have a club card? (Y/N):" << endl;
    cin >> clubCard;
    
    cout << "Enter tax rate, e.g. 5.5 for 5.5 percent tax: " << endl;
    cin >> taxRate;

    basePrice = firstItem + secondItem;

    if (firstItem < secondItem) {
        halfPrice = (firstItem / 2) + secondItem;
    } else {
        halfPrice = (secondItem / 2) + firstItem;
    }


    if (clubCard == "n") {
        discountPrice = halfPrice;
    } else {
        discountPrice = halfPrice  - (halfPrice * .1);
    }

    totalPrice = discountPrice + (discountPrice * (taxRate / 100));

    cout << "Base Price " << basePrice << endl;
    cout << "Price After Discount " << discountPrice << endl;
    cout << "Total Price " << totalPrice << endl;


}
