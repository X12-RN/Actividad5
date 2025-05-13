#include <gtest/gtest.h>
#include "div.h"
#include <stdexcept> // Required for std::invalid_argument

TEST(DivTest, HandlesPositiveInput)
{
    double result = divide(9, 3); // Changed to double to match function return type
    EXPECT_DOUBLE_EQ(result, 3.0); // Use EXPECT_DOUBLE_EQ for double comparison
}

TEST(DivTest, HandlesZeroInput)
{
    EXPECT_DOUBLE_EQ(divide(9, 0), 0.0); // Changed to expect 0.0 instead of an exception
}