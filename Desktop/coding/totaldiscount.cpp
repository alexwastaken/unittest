#include <iostream>
using namespace std;

int main() {

    float firstItem;
    float secondItem;
    float basePrice;
    float halfPrice;
    float discountPrice;
    float totalPrice;
    float taxRate;
    string clubCard;

    cout << "Enter price of first item: ";
    cin >> firstItem;

    cout << "Enter price of second item: ";
    cin >> secondItem;

    cout << "Does customer have a club card? (Y/N):";
    cin >> clubCard;
    
    cout << "Enter tax rate, e.g. 5.5 for 5.5 percent tax: ";
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
