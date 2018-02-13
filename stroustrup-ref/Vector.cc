#include <iostream>
using namespace std;

class Vector {
 public:
  Vector(int s) : elem{new double[s]}, sz{s} {}  // construct Vector
  double& operator[](int i) { return elem[i]; }  // define access by [i] ref
  int size() { return sz; }

 private:
  double* elem;  // pointer to elems
  int sz;        // number of size
};

double read_and_sum(int s) {
  Vector v(s);
  for (int i{0}; i != v.size(); ++i) cin >> v[i];  // read
  double sum{0};
  for (int i{0}; i != v.size(); ++i) sum += v[i];  // sum up
  return sum;
}