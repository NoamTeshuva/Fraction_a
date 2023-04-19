#include "Fraction.hpp"
#include <iostream>

namespace ariel{


Fraction Fraction:: operator+ (const Fraction& other) const {return other;};
Fraction Fraction:: operator+ (const float& other) const{return other;};
Fraction operator+ (const float& num, const Fraction& other){return other;};

Fraction Fraction:: operator- (const Fraction& other) const{return other;};
Fraction Fraction:: operator- (const float& other) const{return other;};
Fraction operator- (const float& num, const Fraction& other){return other;};

Fraction Fraction:: operator* (const Fraction& other) const{return other;}; 
Fraction Fraction:: operator* (const float& other) const{return other;};
Fraction operator* (const float& num, const Fraction& other){return other;};

Fraction Fraction:: operator/ (const float& other) const{return other;}; 
Fraction Fraction:: operator/ (const Fraction& other) const{return other;}; 
Fraction operator/ (const float& num, const Fraction& other){return other;};

bool operator==(const Fraction& numA, float numB){return true;};
bool operator<(const Fraction& numAa, float numB){return true;};
bool operator>(const Fraction& numA, float numB){return true;};
bool operator<=(const Fraction& numA, float numB){return true;};
bool operator>=(const Fraction& numA, float numB){return true;};

bool Fraction:: operator==(const Fraction& numBb){return true;};
bool Fraction:: operator<( const Fraction& numB){return true;};
bool Fraction:: operator>(const Fraction& numB){return true;};
bool Fraction:: operator>=(const Fraction& numB){return true;};
bool Fraction:: operator<=(const Fraction& numB){return true;};

bool Fraction:: operator==(float numA){return true;};
bool Fraction:: operator<(float numA){return true;};
bool Fraction:: operator>(float numA){return true;};
bool Fraction:: operator>=(float numA){return true;};
bool Fraction:: operator<=(float numA){return true;};

Fraction& Fraction::operator++(){_numerator += _denominator; return *this;};
Fraction& Fraction::operator--(){_numerator += _denominator; return *this;};
Fraction& Fraction::operator++(int dummy){return *this;};
Fraction& Fraction::operator--(int dummy){return *this;};




std::ostream& operator<<(std::ostream& output,const Fraction& numA) {return output; };
std::istream& operator>>(std::istream& input, Fraction& numA){ return input;};
}
 
