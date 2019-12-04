//
//  Complex.hpp
//  Pic 10B Homework 4
//
//  Created by Michaella Baltazar on 11/23/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef Complex_h
#define Complex_h
#include <iostream>
#include <sstream>

#include <stdio.h>

class Complex
{
public:
    friend std::ostream& operator << (std::ostream &os, Complex &a);
    Complex();
    Complex(float r, float i);
    float getReal();
    float getImag();
    Complex operator+ (Complex a);
    Complex operator- (Complex a);
    Complex operator* (Complex a);
    Complex operator/ (Complex a);
    void print();
private:
    float real;
    float imag;
};

#endif /* Complex_h */

