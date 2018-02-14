#include "Vector.hh"
#include <stdexcept>
using namespace std;

// define Vector class
Vector::Vector(int s) {
  if (s < 0) throw length_error{"length error"};
  elem = new double[s];
  sz = s;
}
double& Vector::operator[](int i) {
  if (i < 0 || size() <= i) throw out_of_range{"Vector::operator[]"};
  return elem[i];
}
int Vector::size() { return sz; }

void test() {
  try {
    Vector v(-27);
  } catch (std::length_error) {
    // case negative
  } catch (std::bad_alloc) {
    // case memory insufficient
  }
}

int main() {
  test();
  return 0;
}