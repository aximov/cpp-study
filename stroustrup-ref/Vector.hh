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