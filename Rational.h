#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
#include <string>
using namespace std;
#pragma once
int gCD(int, int);
class Rational
{
public:
    Rational() : numerator(0) , denominator(1) {};
    Rational(int val1 , int val2);

    ~Rational();
    void operator =(Rational other); 
    Rational operator +(Rational other);
    Rational operator -(Rational other);
    Rational operator *(Rational other);
    Rational operator /(Rational other);

    bool operator ==(Rational other);
    bool operator >(Rational other);
    bool operator <(Rational other);
    bool operator !=(Rational other);
    friend Rational operator+(int integer,const Rational &rational);
    friend Rational operator+(const Rational &rational,int integer);
    friend ostream& operator << (ostream& COUT ,const Rational &rational);

    friend istream& operator >> (istream& CIN , Rational &rational);

private:
    int numerator;
    int denominator;
    void reduce();
};

#endif