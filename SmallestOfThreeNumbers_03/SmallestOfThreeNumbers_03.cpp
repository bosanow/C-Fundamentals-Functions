//Write a function to print the smallest of three integer numbers. Use an appropriate name for the function.


using namespace std;
#include <iostream>


int SmallestNumber(int a, int b, int c)
{
    if (a < b && a < c) {
        cout << a << endl;
        return a;
    }
    else if (b < a && b < c) {
        cout << b << endl;
        return b;
    }
    else {
        cout << c << endl;
        return c;
    }

}

int main()
{
    int numA, numB, numC;
    cin >> numA >> numB >> numC;

    SmallestNumber(numA, numB, numC);
    return 0;
}
