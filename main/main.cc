#include <iostream>
#include <vector>

#include "lib/lib.h"

int main()
{
  std::vector<uint32_t> a{5, 4, 3, 2, 1};
  lib::sort::mergesort(&a);
  return 0;
}