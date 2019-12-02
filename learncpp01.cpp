#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter another number: ";
    cin >> y;

    int sum = x + y;
    int product = x * y;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}

