//Write a function that receives a grade between 2.00 and 6.00 and prints the corresponding grade in words
//
//· 2.00 – 2.99 - "Fail"
//· 3.00 – 3.49 - "Poor"
//· 3.50 – 4.49 - "Good"
//· 4.50 – 5.49 - "Very good"
//· 5.50 – 6.00 - "Excellent"

#include <iostream>
using namespace std;

void Grade(double funcGrade)
{
    if (funcGrade >= 2.00 && funcGrade <= 2.99) {
        cout << "Fail" << endl;
    }
    else if (funcGrade <= 3.49) {
        cout << "Poor" << endl;
    }
    else if (funcGrade <= 4.49) {
        cout << "Good" << endl;
    }
    else if (funcGrade <= 5.49) {
        cout << "Very good" << endl;
    }
    else if (funcGrade > 5.49 && funcGrade <= 6.00) {
        cout << "Excellent" << endl;
    }
    return;
}

int main()
{
    double grade;
    cin >> grade;

    Grade(grade);
}

