#include "gtest/gtest.h"
#include "fraction_calculation.h"




TEST(funct, tes1) {
   fraction_calculation Proper(5, -2);
    fraction_calculation::fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), -5);
    ASSERT_EQ ( Proper.getDenominator(), 2);
}
