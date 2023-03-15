//Create a function that prints the sign of an integer number n :
//2 The number 2 is positive.
//- 5 The number - 5 is negative.
//0 The number 0 is zero.
...

using namespace std;
#include <iostream>




void isPositive(int funcNumber)
{   
    if (funcNumber == 0)
    {
        cout << "The number 0 is zero." << endl;
    }
    else if (funcNumber > 0) {
        cout << "The number " << funcNumber << " is positive." << endl;
    }
    else {
        cout << "The number " << funcNumber << " is negative." << endl;
    }
    return;
    
}

int main()
{
    int number;
    cin >> number;
 
    isPositive(number);

}
