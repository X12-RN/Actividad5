#include <gtest/gtest.h>
#include "mult.h"

TEST(MultTest, HandlesPositiveInput)
{
    double result = multiply(2, 3);
    EXPECT_EQ(result, 6);
}

TEST(MultTest, HandlesZeroInput)
{
    double result = multiply(9, 0);
    EXPECT_EQ(result, 0);
}

TEST(MultTest, HandlesNegativeInput)
{
    double result = multiply(-2, 3);
    EXPECT_EQ(result, -6);
}
