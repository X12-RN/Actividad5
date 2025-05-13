#include <gtest/gtest.h>
#include "sub.h"

TEST(SubTest, HandlesPositiveInput)
{
    double resta = sub(5, 1); // Changed to double
    EXPECT_DOUBLE_EQ(resta, 4.0); // Use EXPECT_DOUBLE_EQ and compare with double
}
