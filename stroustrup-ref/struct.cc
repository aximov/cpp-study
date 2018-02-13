#include <iostream>
using namespace std;

struct Vector {
  int sz;        // size
  double* elem;  // pointer to elements
};

// vector initialization
// this can change its argument vector v
void vector_init(Vector& v, int s) {  // & means non-const reference
  v.elem = new double[s];             // now elem is poninter values
  v.sz = s;
}

double read_and_sum(int s) {
  Vector v;
  vector_init(v, s);
  for (int i{0}; i != s; ++i) cin >> v.elem[i];  // read
  double sum{0};
  for (int i{0}; i != s; ++i) sum += v.elem[i];  // sum up
  return sum;
}

// example function for accessing
void f(Vector v, Vector& rv, Vector* pv) {
  int i1{v.sz};    // by name
  int i2{rv.sz};   // by ref
  int i4{pv->sz};  // by pointer
}

int main() { cout << read_and_sum(5) << endl; }