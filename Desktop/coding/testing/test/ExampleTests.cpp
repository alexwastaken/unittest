#include <gtest/gtest.h>
#include "../Example.hpp"

TEST(ExampleTests, Square) {
    int x = 5;
    int expectedSquare = x * x;
    EXPECT_EQ(
        expectedSquare,
        Square(x)
    );
}