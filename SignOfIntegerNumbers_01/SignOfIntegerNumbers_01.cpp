
using namespace std;
#include <iostream>




void isPositive(int funcNumber)
{   
    if (funcNumber == 0)
    {
        cout << "The number 0 is zero." << endl;
    }
    else if (funcNumber > 0) {
        cout << "The number " << 2 << " is positive." << endl;
    }
    else {
        cout << "The number " << 2 << " is negative." << endl;
    }
    return;
    
}

int main()
{
    int number;
    cin >> number;
 
    isPositive(number);

}
