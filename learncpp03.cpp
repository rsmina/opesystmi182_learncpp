#include<iostream>
using namespace std;

int main()
{

int x;

cout << "Enter an even number:";
cin >> x;

        while(x >= 1)
                {
                int y = x/2;
                cout << y << endl;
                x = y;
                }
}

