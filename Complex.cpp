//
//  Complex.cpp
//  Pic 10B Homework 4
//
//  Created by Michaella Baltazar on 11/23/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "Complex.h"
#include <iostream>
#include <iomanip>

using namespace std;

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(float r, float i)
{
    real = r;
    imag = i;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImag()
{
    return imag;
}

Complex Complex::operator+(Complex a)
{
    Complex sum;
    sum.real = real + a.real;
    sum.imag = imag + a.imag;
    return sum;
}

Complex Complex::operator-(Complex a)
{
    Complex diff;
    diff.real = real - a.real;
    diff.imag = imag - a.imag;
    return diff;
}

//fix me
Complex Complex::operator/(Complex a)
{
    Complex div;
    float denom=(a.real*a.real) + (a.imag*a.imag);
    div.real=(real*a.real)+(imag*a.imag);
    div.real/=denom;
    div.imag=(imag*a.real)-(real*a.imag);
    div.imag/=denom;
    return div;
}

Complex Complex::operator*(Complex a)
{
    Complex prod;
    prod.real = (real * a.real) - (imag * a.imag);
    prod.imag = (imag * a.real) + (real * a.imag);
    return prod;
}

ostream& operator << (ostream &os, Complex &a)
{
    os << a.getReal();
    os << " + " << a.getImag() << "i" << endl;
    return os;
}


void Complex::print()
{
    cout << fixed << setprecision(1);
    if (imag > 0)
    {
        cout << real << " + " << imag << "i";
    }
    else
    {
        cout << real << " " << imag << "i";
    }
}
