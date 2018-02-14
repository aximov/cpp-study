#include "Container.hh"
#include "Vector.hh"

class Vector_container : public Container {
  Vector v;

 public:
  Vector_container(int s) : v(s) {}
  ~Vector_container() {}
  double& operator[](int i) { return v[i]; }  // define access by [i] ref
  int size() const { return v.size(); }
};