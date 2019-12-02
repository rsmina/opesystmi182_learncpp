#include<iostream>
using namespace std;

#define MAX     5

int main()
{
        int i,j;
        int space=0;
        
        for(i=MAX;i>0;i--)
        {
                /*print first set of stars*/
                for(j=0;j< i;j++)
                {
                        cout << "*";
                }
                for(j=0;j< space;j++)
                {
                        cout << " ";
                }
                /*print second set of stars*/
                for(j=0;j< i;j++)
                {
                        cout << "*";
                }

                cout << " " << endl;
                space+=2;
        }
    return 0;
}

