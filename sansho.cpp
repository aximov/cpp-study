#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int &newnum = num;

    num = 200;
    cout << "num = " << num << endl;
    cout << "newnum = " << newnum << endl;

    newnum = 400;
    cout << "num = " << num << endl;
    cout << "newnum = " << newnum << endl;
    return 0;
}