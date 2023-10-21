#include "Rational.h"

Rational::Rational(int val1 , int val2)
{   if(val2 == 0){
    cout<<"invalid value , so using default value.";
        this->numerator = 0;
        this->denominator = 1;
}else
    {this->numerator = val1;
    this->denominator = val2;}
}

Rational::~Rational()
{

}

void Rational::operator =(Rational other)
{
    this->numerator = other.numerator;
    this->denominator = other.denominator;
}
// a/b + c/d : a*d + b*c / d*c
Rational Rational::operator+(Rational other)
{
    Rational result;
    result.numerator = this->numerator * other.denominator + this->denominator*other.numerator;
    result.denominator = this->denominator * other.denominator;
    result.reduce();
    return result;
}

Rational Rational::operator-(Rational other)
{
    Rational result;
    result.numerator = this->numerator * other.denominator - this->denominator*other.numerator;
    result.denominator = this->denominator * other.denominator;
    result.reduce();
    return result;
}

Rational Rational::operator*(Rational other)
{
    Rational result;
    result.numerator = this->numerator*other.numerator;
    result.denominator = this->denominator * other.denominator;
    result.reduce();
    return result;
}

Rational Rational::operator/(Rational other)
{
      Rational result;
    result.numerator = this->numerator/other.numerator;
    result.denominator = this->denominator / other.denominator;
    result.reduce();
    return result;
}

bool Rational::operator==(Rational other)
{  
    int  a = this->numerator*other.denominator ;
    int  b = this->denominator*other.numerator;
    return a == b;
}

bool Rational::operator>(Rational other)
{
    int  a = this->numerator*other.denominator ;
    int  b = this->denominator*other.numerator;
    return a > b;
}

bool Rational::operator<(Rational other)
{
    int  a = this->numerator*other.denominator ;
    int  b = this->denominator*other.numerator;
    return a < b;
}

bool Rational::operator!=(Rational other)
{
    int  a = this->numerator*other.denominator ;
    int  b = this->denominator*other.numerator;
    return a != b;
}

void Rational::reduce()
{   int gcd = gCD(this->numerator , this->denominator);
    this->numerator /= gcd;
    this->denominator /= gcd;
    
}

int gCD(int a, int b)
{   
    if( b == 0) return a;
    else{
        return gCD(b , a%b);
    }
}

Rational operator+(int integer,const Rational &rational)
{
    int newNumerator = integer*rational.denominator + rational.numerator;
   Rational result(newNumerator,rational.denominator);
   result.reduce();
    return result;
}
Rational operator+(const Rational &rational,int integer)
{
    int newNumerator = integer*rational.denominator + rational.numerator;
   Rational result(newNumerator,rational.denominator);
   result.reduce();
    return result;
}

ostream& operator << (ostream& COUT ,const Rational &rational)
{
    if(rational.denominator == 1) COUT << rational.numerator;
    else if(rational.denominator == 0) COUT << 0;
    else {
        COUT<<rational.numerator<<"/"<<rational.denominator;
    }
    return COUT;
}

istream &operator>>(istream &CIN,  Rational &rational)
{
    CIN>>rational.numerator>>rational.denominator;
    return CIN;
}
