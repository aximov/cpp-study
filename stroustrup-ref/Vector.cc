#include <iostream>
using namespace std;

// declare Vector class
class Vector {
 public:
  Vector(int s);              // constructor
  double& operator[](int i);  // define access by [i] ref
  int size();

 private:
  double* elem;  // pointer to elems
  int sz;        // number of size
};

// define Vector class
Vector::Vector(int s) : elem{new double[s]}, sz{s} {}
double& Vector::operator[](int i) { return elem[i]; }
int Vector::size() { return sz; }

double read_and_sum(int s) {
  Vector v(s);
  for (int i{0}; i != v.size(); ++i) cin >> v[i];  // read
  double sum{0};
  for (int i{0}; i != v.size(); ++i) sum += v[i];  // sum up
  return sum;
}