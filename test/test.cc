#include <gtest/gtest.h>

#include <vector>

#include "lib/lib.h"

template <class T>
void test_sort(T f) {
  std::vector<uint32_t> d;
  std::vector<uint32_t> r;
  d = {5, 4, 3, 2, 1};
  r = {1, 2, 3, 4, 5};
  f(&d);
  EXPECT_EQ(d, r);
  d = {0, 0};
  r = {0, 0};
  f(&d);
  EXPECT_EQ(d, r);
  d = {0};
  r = {0};
  f(&d);
  EXPECT_EQ(d, r);
  d = {};
  r = {};
  f(&d);
  EXPECT_EQ(d, r);
}

TEST(sort, mergesort) {
  test_sort(lib::sort::mergesort<uint32_t, std::allocator<uint32_t>>);
}