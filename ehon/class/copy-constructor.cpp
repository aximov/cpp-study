#include <iostream>
#include <string.h>

class Person
{
  public:
    Person()
    {
        name = new char[50];
    }
    Person(const Person &psn);
    ~Person()
    {
        delete[] name;
    }
    void SetName(char *newname)
    {
        strcpy(name, newname);
    }
    void GetName(char *namebuf)
    {
        strcpy(namebuf, name);
    }

  private:
    char *name;
};

Person::Person(const Person &psn)
{
    name = new char[strlen(psn.name) + 1];
    strcpy(name, psn.name);
}

using namespace std;
int main()
{
    Person *psn1 = new Person;
    psn1->SetName("Shiori");
    Person *psn2 = new Person(*psn1);
    char name[50];
    psn2->GetName(name);
    cout << name << endl;

    delete psn1;
    delete psn2;
    return 0;
}