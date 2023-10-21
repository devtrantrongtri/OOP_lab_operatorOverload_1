#include <iostream>
#include "Rational.h"
using namespace std;
int main(){
    // create object
    Rational a(2,5);
    Rational b(8,5);
    Rational c(2,1);
    Rational d(c);
    Rational e;
    Rational i;

    cout<<"The first rational (A) should be 2/5 :" <<a<<endl;
    cout << "the second rational (B) should be 8/5 : " << b << endl;
    cout << "the third rational (C) should be 2 : " << c << endl;
    cout << "the fourth rational (D) should be like (c) = 2 : " << d << endl;
    cout << "the fifth rational (E) should be 0 : " << e << endl;
    cout << "enter I = " << endl;
    cin >> i;
    cout << i << endl;
    cout << " Arithmathics operations " << endl;
    cout << " ===================== " << endl;
    cout << a<<"+" <<b<< "=" << a + b << endl;
    cout << c<<"-"<<b<<"=" << c - b << endl;
    cout << b<<"-"<<c<<"="<< b - c << endl;
    cout << c<<"*"<<b<<"=" << c * b << endl;
    cout << b<<"/"<<a<<"=" << b / a << endl;
    cout << " Logical operations " << endl;
    cout << " ===================== " << endl;
    cout <<a<<">"<<b<<" should be false: " << (a>b) << endl;
    cout << a<<"<"<<b<<" should be True: " << (a<b) << endl;
    cout << a<<"=="<<b<<" should be false: " << (a==b) << endl;
    cout << a<<"!="<<b<<" should be True: " << (a!=b) << endl;
    cout << c<<"=="<<d<<" should be True: " << (c==d) << endl;
    cout << " ============================== " << endl;
    cout << " Arithmathics operations " << endl;
    cout << " ============================== " << endl;
    cout << a<<"+2=" << a + 2 << endl;
    cout << " 2 + "<<a<<"=" << 2 + a << endl;
    cout << " ===============================" << endl;
    cout << "\n\nDivision by Zero" << endl;
    cout << " ============================== " << endl;
    cout << "Rational g(3,0): ";
    Rational g(3,0);
    cout << g << endl;
    Rational h(0,1);
    cout << "Divide by zero - a/h should not give abnormal exit:" << a/h << endl;
    cout << " ============================== " << endl;
    cout << "Good Luck" << endl;
    return 0;
}