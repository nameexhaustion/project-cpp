#include <gtest/gtest.h>

#include "lib/lib.h"

TEST(add, add) {
  int a = 2;
  int b = 3;
  EXPECT_EQ(lib::add(a, b), 5);
}