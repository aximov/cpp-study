#include <iostream>
using namespace std;

void Changevalue(double &a)
{
    a = 200;
}

int main()
{
    double num1 = 100;
    cout << "num1 = " << num1 << endl;
    Changevalue(num1);
    cout << "num1 = " << num1 << endl;
    return 0;
}