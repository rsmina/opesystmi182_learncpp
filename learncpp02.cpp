#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    int  input;

    cout << "Enter 1 for celsius to farenheit, 2 for farenheit to celsius: ";
    cin >> input;

    if(input == 1) {
    cout << "Enter degree in celsius: ";
    cin >> x;

    cout << "Farenheit: " << (x*(9/5) + 32) << endl;

    }

    if(input == 2) {

    cout << "Enter degree in farenheit: ";
    cin >> y;

    cout << "Celsius: " << ((y-32) * 5/9) << endl;

    }

}

