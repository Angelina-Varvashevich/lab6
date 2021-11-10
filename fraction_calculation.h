#pragma once

void input(int &numerator, int &denominator);

class fraction_calculation {
public:
    fraction_calculation(int numerator, int denominator);
    fraction_calculation(const fraction_calculation& copy);
    int getNumerator();
    int getDenominator();
    static fraction_calculation fractionTrue(fraction_calculation Proper);
    static fraction_calculation addition(fraction_calculation Proper1, fraction_calculation Proper2);
    static fraction_calculation multiplication(fraction_calculation pr1, fraction_calculation pr2);
    static fraction_calculation division(fraction_calculation pr1, fraction_calculation pr2);
    void printFraction();
private:
    int numerator;
    int denominator;
    static int Euclid(int a, int b);
};


