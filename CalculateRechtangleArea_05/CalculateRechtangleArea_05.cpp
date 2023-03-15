// Create a function that calculates and returns the area of a rectangle by given width and height:
//..................................

using namespace std;
#include <iostream>

void Formula(int a, int b);

int main()
{
    int numA, numB;
    cin >> numA >> numB;

    Formula(numA, numB);

}

void Formula(int a, int b) {
    int result = a * b;
    cout << result << endl;
    return;
}