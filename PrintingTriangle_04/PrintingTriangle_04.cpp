// Create a function for printing triangles as shown below:
//

#include <iostream>
using namespace std;

void Triangle(int a) {

    int i = 1;
    int k = 1;

    for (i = 1; i <= a; i++) {
        for (k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    return;
}

void ReverseTriangle(int a) {

    int j = a - 1;
    int p = 1;
    int o = 1;

    for (j = a-1; j >= 1; j--) {
        for (p = 1; p <= j; p++) {
            cout << p << " ";
        }
        cout << endl;
    }
    return;
}

int main()
{
    int number;
    cin >> number;

    Triangle(number);
    ReverseTriangle(number);

}

