#include "gtest/gtest.h"
#include "fraction_calculation.h"

TEST(fractionTrue1, signs) {
    fraction_calculation Proper(5, 2);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), 5);
    ASSERT_EQ ( Proper.getDenominator(), 2);
}
TEST(fractionTrue2, signs) {
    fraction_calculation Proper(-5, -2);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), 5);
    ASSERT_EQ ( Proper.getDenominator(), 2);
}
TEST(fractionTrue3, signs) {
    fraction_calculation Proper(-5, 2);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), -5);
    ASSERT_EQ ( Proper.getDenominator(), 2);
}
TEST(fractionTrue4, signs) {
    fraction_calculation Proper(5, -2);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), -5);
    ASSERT_EQ ( Proper.getDenominator(), 2);
}
TEST(fractionTrue5, incorrectDrob) {
    fraction_calculation Proper(5, 2);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), 5);
    ASSERT_EQ ( Proper.getDenominator(), 2);
}
TEST(fractionTrue6, incorrectDrob) {
    fraction_calculation Proper(-15, -25);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), 3);
    ASSERT_EQ ( Proper.getDenominator(), 5);
}
TEST(fractionTrue7, incorrectDrob) {
    fraction_calculation Proper(-15, 6);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), -5);
    ASSERT_EQ ( Proper.getDenominator(), 2);
}
TEST(fractionTrue8, incorrectDrob) {
    fraction_calculation Proper(15, -5);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), -3);
    ASSERT_EQ ( Proper.getDenominator(), 1);
}
TEST(fractionTrue9, incorrectDrob) {
    fraction_calculation Proper(5, 5);
    Proper =  Proper.fractionTrue(Proper);
    ASSERT_EQ ( Proper.getNumerator(), 1);
    ASSERT_EQ ( Proper.getDenominator(), 1);
}
TEST(addition1, equalFractions) {
    fraction_calculation frac1(1, 1);
    fraction_calculation frac2(1,1 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum .getNumerator(), 2);
    ASSERT_EQ ( Sum .getDenominator(), 1);
}
TEST(addition2, zero) {
    fraction_calculation frac1(1, 1);
    fraction_calculation frac2(0,1 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum .getNumerator(), 1);
    ASSERT_EQ ( Sum .getDenominator(), 1);
}
TEST(addition3, oppositeFractions ) {
    fraction_calculation frac1(-1, 1);
    fraction_calculation frac2(1,1 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum .getNumerator(), 0);
    ASSERT_EQ ( Sum .getDenominator(), 1);
}
TEST(addition4, zero) {
    fraction_calculation frac1(-1, 1);
    fraction_calculation frac2(0,1 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum.getNumerator(), -1);
    ASSERT_EQ ( Sum.getDenominator(), 1);
}
TEST(addition5, negativeAndPositive ) {
    fraction_calculation frac1(-5, 1);
    fraction_calculation frac2(3,1 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum.getNumerator(), -2);
    ASSERT_EQ ( Sum.getDenominator(), 1);
}
TEST(addition6, negativeAndPositive) {
    fraction_calculation frac1(5, 1);
    fraction_calculation frac2(-3,1 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum.getNumerator(), 2);
    ASSERT_EQ ( Sum.getDenominator(), 1);
}
TEST(addition7, negative) {
    fraction_calculation frac1(-5, 1);
    fraction_calculation frac2(-4, 1);
    fraction_calculation Sum = fraction_calculation::addition(frac1, frac2);
    ASSERT_EQ (Sum.getNumerator(), -9);
    ASSERT_EQ (Sum.getDenominator(), 1);
}
TEST(addition8, positive) {
    fraction_calculation frac1(3, 25);
    fraction_calculation frac2(2,27 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum .getNumerator(), 131);
    ASSERT_EQ ( Sum .getDenominator(), 675);
}
TEST(addition9, zero) {
    fraction_calculation frac1(1, 5);
    fraction_calculation frac2(0,3 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum .getNumerator(), 1);
    ASSERT_EQ ( Sum .getDenominator(), 5);
}
TEST(addition10, negativeAndPositive) {
    fraction_calculation frac1(-12, 5 );
    fraction_calculation frac2(3,4 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum .getNumerator(), -33);
    ASSERT_EQ ( Sum .getDenominator(), 20);
}
TEST(addition11, zero) {
    fraction_calculation frac1(-1, 3);
    fraction_calculation frac2(0,5 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum.getNumerator(), -1);
    ASSERT_EQ ( Sum.getDenominator(), 3);
}
TEST(addition12, negativeAndPositive) {
    fraction_calculation frac1(-5, 10);
    fraction_calculation frac2(3,27 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum.getNumerator(), -7);
    ASSERT_EQ ( Sum.getDenominator(), 18);
}
TEST(addition13, negativeAndPositive) {
    fraction_calculation frac1(5, 25);
    fraction_calculation frac2(-9,27 );
    fraction_calculation Sum = fraction_calculation::addition (frac1, frac2);
    ASSERT_EQ ( Sum.getNumerator(), -2);
    ASSERT_EQ ( Sum.getDenominator(), 15);
}
TEST(addition14, negative) {
    fraction_calculation frac1(-5, 25);
    fraction_calculation frac2(-18, 27);
    fraction_calculation Sum = fraction_calculation::addition(frac1, frac2);
    ASSERT_EQ (Sum.getNumerator(), -13);
    ASSERT_EQ (Sum.getDenominator(), 15);
}
TEST(multiplication1, equalFractions) {
    fraction_calculation frac1(5, 3);
    fraction_calculation frac2(5, 3);
    fraction_calculation Mult = fraction_calculation::multiplication(frac1, frac2);
    ASSERT_EQ (Mult.getNumerator(), 25);
    ASSERT_EQ (Mult.getDenominator(), 9);
}
TEST(multiplication2,zero) {
    fraction_calculation frac1(5, 3);
    fraction_calculation frac2(0, 3);
    fraction_calculation Mult = fraction_calculation::multiplication(frac1, frac2);
    ASSERT_EQ (Mult.getNumerator(), 0);
    ASSERT_EQ (Mult.getDenominator(), 1);
}
TEST(multiplication3, fractionReduction ) {
    fraction_calculation frac1(-5, 18);
    fraction_calculation frac2(9, 15);
    fraction_calculation Mult = fraction_calculation::multiplication(frac1, frac2);
    ASSERT_EQ (Mult.getNumerator(),-1);
    ASSERT_EQ (Mult.getDenominator(), 6);
}
TEST(multiplication4, signs) {
    fraction_calculation frac1(-5, 18);
    fraction_calculation frac2(-9, 15);
    fraction_calculation Mult = fraction_calculation::multiplication(frac1, frac2);
    ASSERT_EQ (Mult.getNumerator(), 1);
    ASSERT_EQ (Mult.getDenominator(), 6);
}
TEST(multiplication5, neutralElement) {
    fraction_calculation frac1(9, 15);
    fraction_calculation frac2(1, 1);
    fraction_calculation Mult = fraction_calculation::multiplication(frac1, frac2);
    ASSERT_EQ (Mult.getNumerator(), 3);
    ASSERT_EQ (Mult.getDenominator(), 5);
}
TEST(multiplication6, reciprocalFractions ) {
    fraction_calculation frac1(9, 15);
    fraction_calculation frac2(15, 9);
    fraction_calculation Mult = fraction_calculation::multiplication(frac1, frac2);
    ASSERT_EQ (Mult.getNumerator(), 1);
    ASSERT_EQ (Mult.getDenominator(), 1);
}
TEST(division1, equalFractions) {
    fraction_calculation frac1(9, 15);
    fraction_calculation frac2(9, 15);
    fraction_calculation Div = fraction_calculation::division(frac1, frac2);
    ASSERT_EQ (Div.getNumerator(), 1);
    ASSERT_EQ (Div.getDenominator(), 1);
}
TEST(division2, neutralElement) {
    fraction_calculation frac1(5, 3);
    fraction_calculation frac2(1, 1);
    fraction_calculation Div = fraction_calculation::division(frac1, frac2);
    ASSERT_EQ (Div.getNumerator(), 5);
    ASSERT_EQ (Div.getDenominator(), 3);
}
TEST(division3, neutralElement) {
    fraction_calculation frac1(1, 1);
    fraction_calculation frac2(5, 3);
    fraction_calculation Div = fraction_calculation::division(frac1, frac2);
    ASSERT_EQ (Div.getNumerator(), 3);
    ASSERT_EQ (Div.getDenominator(), 5);
}
TEST(division4, fractionReduction ) {
    fraction_calculation frac1(5, 3);
    fraction_calculation frac2(30, 9);
    fraction_calculation Div = fraction_calculation::division(frac1, frac2);
    ASSERT_EQ (Div.getNumerator(), 1);
    ASSERT_EQ (Div.getDenominator(), 2);
}








