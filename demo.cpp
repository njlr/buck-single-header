#include <iostream>
#include <mathutils/mathutils.hpp> // Our generated header

int main() {
  using namespace mathutils;
  std::cout << "add(1, 2) = " << add(1, 2) << std::endl;
  std::cout << "sub(4, 3) = " << sub(4, 3) << std::endl;
  // etc...
  return 0;
}
