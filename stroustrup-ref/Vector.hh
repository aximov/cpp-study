// declare Vector class
class Vector {
 private:
  double* elem;  // pointer to elems
  int sz;        // number of size

 public:
  Vector(int s) : elem{new double[s]}, sz{s} {  // constructor
    for (int i = 0; i != s; ++i) elem[i] = 0;
  }
  ~Vector() { delete[] elem; }
  double& operator[](int i);  // define access by [i] ref
  int size();
};