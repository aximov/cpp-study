#include <iostream>
using namespace std;

struct Person{
    char name[50];
    int age;
};

void PrintPersonRef(const Person &psn)
{
    cout << psn.name << "さん" << psn.age << "歳" << endl;
}

void PrintPersonPtr(const Person *psn)
{
    cout << psn->name << "さん" << psn->age << "歳" << endl;
}

int main()
{
    Person shain1 = {"Shiori", 18};
    PrintPersonRef(shain1);
    PrintPersonPtr(&shain1);
    return 0;
}