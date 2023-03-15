// Create a function that calculates and returns the value of a number raised to a given power: 
//

#include <iostream>
#include <cmath>
using namespace std;

void Formula(int a, int b) {   

    int result = pow(a, b);
    cout << result << endl;

    return;
}

int main()
{
    int numA, numB;
    cin >> numA >> numB;

    Formula(numA,numB);
    
}

