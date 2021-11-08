#include "fraction_calculation.h"
#include <iostream>
#include <cmath>
/*void input(int &numerator, int &denominator) {
    std::cout << "Input numerator: ";
    std::cin >> numerator;
    std::cout << "Input denominator: ";
    std::cin >> denominator;
}*/
fraction_calculation::fraction_calculation(int numerator, int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
    if (denominator == 0) {
        throw std::exception("0 in denominator");
    }
}
fraction_calculation::fraction_calculation (const fraction_calculation& copy){ // конструктор копирования
    this->numerator = copy.numerator;
    this->denominator = copy.denominator;
}
int fraction_calculation::Euclid (int a, int b){
    while ( b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int fraction_calculation::getNumerator(){
 return numerator;
}
int fraction_calculation::getDenominator(){
    return denominator;
}
fraction_calculation fraction_calculation::fractionTrue( fraction_calculation Proper ){ // привожу дробь к правильной
    if (Proper.getNumerator() < 0 && Proper.getDenominator()< 0){
       fraction_calculation Proper1 ((-1)*Proper.getNumerator(), (-1)*Proper.getDenominator());
        Proper = Proper1;
    }
    if ( Proper.getNumerator() > 0 && Proper.getDenominator()< 0){
        fraction_calculation Proper2 ((-1)*Proper.getNumerator(), (-1)*Proper.getDenominator());
        Proper = Proper2;
    }
    int gcd = abs(Euclid(Proper.getNumerator(), Proper.getDenominator()));
    fraction_calculation Proper3 (Proper.getNumerator()/gcd, Proper.getDenominator()/gcd );
    Proper = Proper3;
    return  Proper;
}
fraction_calculation fraction_calculation:: addition(fraction_calculation pr1, fraction_calculation pr2) {
    int num =  (pr1.getNumerator()*pr2.getDenominator())+ (pr2.getNumerator()*pr1.getDenominator()) ;
    int denom = pr1.getDenominator()*pr2.getDenominator();
    fraction_calculation Sum (num, denom );
     Sum = Sum.fractionTrue(Sum );
    return Sum;
}
fraction_calculation fraction_calculation:: multiplication(fraction_calculation pr1, fraction_calculation pr2) {
    int num =  pr1.getNumerator()*pr2.getNumerator() ;
    int denom = pr1.getDenominator()*pr2.getDenominator();
    fraction_calculation mult (num, denom );
    mult = mult.fractionTrue(mult );
    return mult;
}
fraction_calculation fraction_calculation:: division(fraction_calculation pr1, fraction_calculation pr2) {
    int num = pr1.getNumerator()*pr2.getDenominator() ;
    int denom = pr1.getDenominator()*pr2.getNumerator() ;
    fraction_calculation div (num,denom );
    div = div.fractionTrue(div);
    return div;
}
void fraction_calculation::printFraction() {
    fraction_calculation Proper (numerator,denominator ) ; //  упрощение дроби
    Proper =  Proper.fractionTrue(Proper);
    std::cout<<Proper.getNumerator()<<"/"<< Proper.getDenominator()<< std::endl ;
}





