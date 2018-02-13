#include <iostream>
using namespace std;

int main() {
  char v[6]{'a', 'b', 'c', 'd', 'e', 'f'};
  char* p = &v[3];
  char x = *p;
  cout << p << endl;
  cout << *p << endl;
  cout << &v[3] << endl;
  cout << v[3] << endl;
  cout << x << endl;
  cout << &x << endl;
}