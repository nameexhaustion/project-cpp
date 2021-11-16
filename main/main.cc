#include <cstdint>
#include <iostream>

#include "lib/lib.h"

int main() {
  lib::dsa::slist::List<std::uint32_t> l;
  l.push(23);
  l.push(42);
  l.push(999);
  l.push(1);
  l.push(0);
  l.push(3227);

  for (auto n = l.head; n != nullptr; n = n->next) {
    std::cout << n->data << "\n";
  }
  return 0;
}