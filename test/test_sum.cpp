#include <gtest/gtest.h>
#include "sum.h"

TEST(SumTest, HandlesPositiveInput)
{
    double suma = sum(1, 5); // Changed to double
    EXPECT_DOUBLE_EQ(suma, 6.0); // Use EXPECT_DOUBLE_EQ and compare with double
}
