#include <my_class.hpp>

my_class::my_class() : num(0) {}
my_class::my_class(int n): num(n) {}
int my_class::getNum()
{
  return num;
}
